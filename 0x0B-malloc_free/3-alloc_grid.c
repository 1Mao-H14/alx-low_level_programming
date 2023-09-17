#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 *@width: width Inpute
 *@height: height Inpute
 *Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)

{

	int **kkk;
	int h, z;

if (width <= 0 || height <= 0)
return (NULL);
kkk = malloc(sizeof(int *) * height);
if (kkk == NULL)
return (NULL);
for (h = 0; h < height; h++)
{
kkk[h] = malloc(sizeof(int) * width);

if (kkk[h] == NULL)

{

for (; h >= 0; h--)
free(kkk[h]);
free(kkk);
return (NULL);
}

}

for (h = 0; h < height; h++)

{

for (z = 0; z < width; z++)

kkk[h][z] = 0;
}
return (kkk);
}
