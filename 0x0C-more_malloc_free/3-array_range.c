#include <stdlib.h>
#include "main.h"

/**
 * *array_range - CREATS An Array Of Integers VALUES
 * @min:THE MiniMuM Value of  Range been Stored
 * @max:THE MaXiMuM VALUE OF range stored ELMENTS
 *
 * Return:  pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *qws;
	int v;
	int tall;

	if (min > max)
		return (NULL);

	tall = max - min + 1;

	qws = malloc(sizeof(int) * tall);

	if (qws == NULL)
		return (NULL);

	for (v = 0; min <= max; v++)
		qws[v] = min++;

	return (qws);
}
