#include "main.h"

/**
 *
 *
 *
 *
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square (n, 1));
}
int square(int n, int val)
{
if (val * val == n)
return (val);
elas if (val * val < n)
return (square(n, val + 1));
else
return (-1);
}
