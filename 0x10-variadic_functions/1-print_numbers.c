#include "variadic_functions.h"
	#include <stdio.h>
	#include <stdarg.h>

/**
*print_numbers - Prints numbers, followed by a new line.
*@separator: input of  The string to be printed between numbers.
*@n: input of  The number of integers PASSED
*@...: A variable number of numbers to be printed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
	{
		va_list xxx;
		unsigned int ooo;


		va_start(xxx, n);


		for (ooo = 0; ooo < n; ooo++)
		{
			printf("%d", va_arg(xxx, int));


			if (ooo != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(xxx);
	}

