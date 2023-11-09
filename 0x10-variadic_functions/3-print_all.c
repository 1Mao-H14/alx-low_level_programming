#include "variadic_functions.h"
	#include <stdarg.h>
	#include <stdio.h>
/**
* print_all -a function thats  prints anything
* @format:input  then list of types of arguments passed
*/
void print_all(const char * const format, ...)
{
int v = 0;
char *xxx, *www = "";
va_list vct;

va_start(vct, format);
if (format)
{
while (format[v])
{
switch (format[v])
{
case 'c':
	printf("%s%c", www, va_arg(vct, int));
break;
case 'i':
printf("%s%d", www, va_arg(vct, int));
break;
case 'f':
printf("%s%f", www, va_arg(vct, double));
break;
case 's':
xxx = va_arg(vct, char *);
if (!xxx)
xxx = "(nil)";
printf("%s%s", www, xxx);
break;
default:
v++;
continue;
}
www = ", ";
v++;
}
}
printf("\n");
va_end(vct);
}
