#include <stdio.h>
#include <stdlib.h>

void main()
{
	int ren;
	ren = rand()%6 + 1;
	printf("You rolled a %d", ren);
}
