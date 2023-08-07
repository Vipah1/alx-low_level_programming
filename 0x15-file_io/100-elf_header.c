#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * elf_checker - checkes for elf file
 * @he: the elf header
 */
void elf_checker(char *he)
{
	if (he[0] != 0x7f || he[1] != 'E' || he[2] != 'L' || he[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: file is not ELF type\n");
		exit(98);
	}
}

/**
 * print_magic - funtion to print elf magic
 * @he: the elf header
 */
void print_magic(char *he)
{
	int i;

	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < 15; i++)
		printf("%02x ", (unsigned int)he[i]);
	printf("%02x", (unsigned int)he[i]);
	printf("\n");
}

/**
 * print_class - funtion to print the elf class
 * @he: the elf header
 * @b: bit argument 1 (64 bits) or 0 (32 bits)
 */
void print_class(char *he, int b)
{
	if (he[4] != 1 && he[4] != 2)
	{
		printf("<unknown: %02hx is not a class>\n", he[4]);
		return;
	}
	printf("Class:                             ");
	if (b == 0)
		printf("ELF32\n");
	else if (b == 1)
		printf("ELF64\n");
}

/**
 * print_data - function to print the elf data
 * @he: the elf header
 */
void print_data(char *he)
{
	printf("Data:                              2's complement, ");
	if (he[5] == 1)
		printf("little endian\n");
	else if (he[5] == 2)
		printf("big endian\n");
	else
		printf("<unknown: %02hx is not a elf data>\n", he[4]);
}

/**
 * print_version - prints elf version
 * @he: elf header
 */
void print_version(char *he)
{
	printf("  Version:                           ");
	if (he[6] == EV_CURRENT)
		printf("%d (current)\n", he[6]);
	else if (he[6] != EV_CURRENT)
	{
		printf("%d\n", he[6]);
	}
}

/**
 * print_osabi - funtion to print the elf OS/ABI
 * @he: the elf header
 */
void print_osabi(char *he)
{
	printf("  OS/ABI:                            ");
	if (he[7] == 0)
		printf("UNIX - System V\n");
	else if (he[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (he[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (he[7] == 3)
		printf("UNIX - Linux\n");
	else if (he[7] == 4)
		printf("UNIX - GNU Hurd\n");
	else if (he[7] == 6)
		printf("UNIX - Solaris\n");
	else if (he[7] == 7)
		printf("UNIX - AIX\n");
	else if (he[7] == 8)
		printf("UNIX - IRIX\n");
	else if (he[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (he[7] == 10)
		printf("UNIX - Tru64\n");
	else if (he[7] == 11)
		printf("UNIX - Novell Modesto\n");
	else if (he[7] == 12)
		printf("UNIX - OpenBSD\n");
	else if (he[7] == 13)
		printf("UNIX - Open VMS\n");
	else if (he[7] == 14)
		printf("UNIX - AROS\n");
	else if (he[7] == 15)
		printf("UNIX - AROS\n");
	else if (he[7] == 16)
		printf("UNIX - Fenix OS\n");
	else if (he[7] == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02hx>\n", he[7]);
}

/**
 * print_abi - funtion to print els abi version
 * @he: the elf header
 */
void print_abi(char *he)
{
	printf("  ABI Version:                       %d\n", he[8]);
}

/**
 * print_type - funtion that prints the elf type
 * @he: the elf header
 * @b: bit argument  int
 */
void print_type(char *he, unsigned int b)
{
	int t = 17;

	(void) b;

	if (he[5] == 1)
		t = 16;
	printf("  Type:                              ");
	switch (he[t])
	{
	case 0:
		printf("NONE\n");
		break;
	case 1:
		printf("REL (Relocatable file)\n");
		break;
	case 2:
		printf("EXEC (Executable file)\n");
		break;
	case 3:
		printf("DYN (Shared object file)\n");
		break;
	case 4:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown>: %02x\n", he[t]);
	}
}

/**
 * print_entry_point - funtion that prints the entry point adress
 * @he: the elf header
 * @b: the address
 */
void print_entry_point(char *he, unsigned int b)
{
	int i, counter = 27;

	printf("  Entry point address:               ");
	if (b == 1)
		counter = 31;
	if (he[5] == 1)
	{
		i = counter;
		while (he[i] == 0 && i > 24)
			i--;
		printf("%x", he[i]);
		i--;
		while (i > 25)
		{
			printf("%02x", (unsigned char) he[i]);
			i--;
		}
	} else
	{
		i = 24;
		while (he[i] == 0)
			i++;
		printf("%x", he[i]);
		i++;
		while (i <= counter)
		{
			printf("%02x", (unsigned char) he[i]);
			i++;
		}
	}
	printf("\n");
}

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fELF, Close, Read, b = 0;
	char he[16];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "wrong number of arguments\n");
		exit(98); }
	if (argv[1] == 0)
	{
		dprintf(STDERR_FILENO, "Please enter a name, NULL error\n");
		exit(98); }
	fELF = open(argv[1], O_RDONLY);
	if (fELF == -1)
	{
		dprintf(STDERR_FILENO, "Can't open file\n");
		exit(98); }
	Read = read(fELF, he, 32);
	if (Read == -1)
	{
		dprintf(STDERR_FILENO, "Error Reading File\n");
		exit(98); }
	elf_checker(he);
	if (he[4] == 2)
		b = 1;
	print_magic(he);
	print_class(he, b);
	print_data(he);
	print_version(he);
	print_osabi(he);
	print_abi(he);
	print_type(he, b);
	print_entry_point(he, b);
	Close = close(fELF);
	if (Close == -1)
	{
		dprintf(STDERR_FILENO, "Error closing FD ELF\n");
		exit(98); }
	return (0);
}
