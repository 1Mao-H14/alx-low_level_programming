#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** main - entry point
 *
 * description: false or true validation 
 *
 * Return :0 (succes) 
*/



int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%iis positive\n", n);
	else if (n == 0)
	printf("%iis zero\n", n);
	else
	printf("%iis negative\n", n);
	return (0);
}
