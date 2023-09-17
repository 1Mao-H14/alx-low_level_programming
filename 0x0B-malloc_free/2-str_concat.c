#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 *@s1: input one to concat
 *@s2: input two to concat
 *Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	char *concate_cope;
	int i, v;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = v = 0;
while (s1[i] != '\0')
i++;
while (s2[v] != '\0')
v++;
concate_cope = malloc(sizeof(char) * (i + v + 1));
if (concate_cope == NULL)
return (NULL);
i = v = 0;
while (s1[i] != '\0')
{
concate_cope[i] = s1[i];
i++;
}
while (s2[v] != '\0')
{
concate_cope[i] = s2[v];
i++, v++;
}
concate_cope[i] = '\0';
return (concate_cope);
}
