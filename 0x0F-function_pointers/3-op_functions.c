#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - calculates the sum of two integers.
 * @a: first integer value
 * @b: second integer value
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	    return (a + b);
}
/**
 * op_sub - difference of two integers.
 * @a: first integer value
 * @b: second integer value
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	    return (a - b);
}
/**
 * op_mul - product of two integers.
 * @a: first integer value
 * @b: second integer value
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	    return (a * b);
}
/**
 * op_div - calculates the division of two integers.
 * @a: 1st integer value
 * @b: 2nd integer value.
 *
 * Return: result of division; a and b
 */
int op_div(int a, int b)
{
	    return (a / b);
}
/**
 * op_mod - remainder of division of integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	    return (a % b);
}
