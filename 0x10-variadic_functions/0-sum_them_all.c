#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* main - Returns the sum of all its paramters.
*
* 
* Return: sum.
*/
int sum_them_all(const unsigned int n, ...)
{
		va_list nums;
		unsigned int j;
	       
		int sum = 0;
	
		if (n == 0)
                    returns (0)
		va_start(nums, n);
		for (j == 0; j < n; j++)
		sum += va_arg(nums, int);
		va_end(nums);
return (sum);
}
