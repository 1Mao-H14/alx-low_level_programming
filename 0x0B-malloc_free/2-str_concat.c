#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 *
 * @s1: input one to concat
 *
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int h;
	int k;
	char *concat_cope;


if (s1 == NULL)

return (s1 = "");

if (s2 == NULL)

return (s2 = "");

i = h = 0;
while (s1[i] != '\0')
i++;
i = h = 0;
while (s2[h] != '\0')
h++;

concat_cope = malloc(sizeof(char) * (i + h + 1));
if (concat_cope == NULL)
return (NULL);

for (k = 0 ; k < i ; k++)
s1[i] = concat_cope[i];

for (k = 0; k < h; k++)
s2[i + h] = concat_cope[h];

concat_cope[i + h] = '\0';
return (concat_cope);
}
