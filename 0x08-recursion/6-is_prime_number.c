#include "main.h"
int act_prime(int n, int i);
/**
 * is_prime_number - prime or not
 * @n: number to evaluate.
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (act_prime(n, n - 1));
}
/**
 * act_prime - real evaluation of prime.
 * @n: evaluation value.
 * @i: iteration.
 * Return: 1 fo prime and 0 for not prime
 */
int act_prime(int n, int i)
{
if(i == 1)
{
return (1);
}
if (n % i == 0 && i > 0)
{
return (0);
}
return (act_prime(n, i - 1));
}
