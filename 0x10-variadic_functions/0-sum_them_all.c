#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its paramters.
* A variable number of paramters to calculate the sum of.
* 
* Return:
* otherwise - all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
		va_list nums;
		unsigned int j, sum = 0;
		va_start(nums, n);
		for (j == 0; j < n; j++)
		sum += va_arg(nums, int);
		va_end(nums);
return (sum);
}
