#include "main.h"
/**
 * find_sqrt - find the squareroot by checking if a number is applicable
 * @n: number to get squareroot of
 * @g: guessing parameter
 * Return: square root or -1
 */
int find_sqrt(int n, int g)
{
if (g * g == n)
{
return (g);
}
else if (g * g > n)
{
return (-1);
}
return (find_sqrt(n, g + 1));
}
/**
 * _sqrt_recursion - finds the square root of a number
 * @n: number to find square root
 * Return: square root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (find_sqrt(n, 1));
}
