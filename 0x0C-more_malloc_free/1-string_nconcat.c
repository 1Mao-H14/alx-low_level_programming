#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *vivo;
	unsigned int xxx,hig = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (xxx = 0; s1[xxx]; xxx++)
		hig++;

	vivo = malloc(sizeof(char) * (hig + 1));

	if (vivo == NULL)
		return (NULL);

	hig = 0;

	for (xxx = 0; s1[xxx]; xxx++)
		vivo[hig++] = s1[xxx];

	for (xxx = 0; s2[xxx] && xxx < n; xxx++)
		vivo[hig++] = s2[xxx];

	vivo[hig] = '\0';

	return (vivo);
}
