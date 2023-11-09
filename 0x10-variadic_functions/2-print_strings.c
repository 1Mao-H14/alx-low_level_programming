#include "variadic_functions.h"
	#include <stdio.h>
	#include <stdarg.h>


/**
* print_strings -a function thats Prints strings, followed by a new line.
* @separator: The STRING between STRINGS.
* @n: The number of STRINGS passed to the FUNCTIONS.
* @...: A variable number of STRINGS .
*
* Description: If separator is NULL, not printed.
*              If ONE of STRINgs if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
	{
		va_list sqs;
		char *www;
		unsigned int aaa;


		va_start(sqs, n);


		for (aaa = 0; aaa < n; aaa++)
		{
			www = va_arg(sqs, char *);


			if (www == NULL)
				printf("(nil)");
			else
				printf("%s", www);


			if (aaa != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(sqs);
	}

