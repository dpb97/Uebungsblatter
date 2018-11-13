#include <stdio.h>
int main(int argc, char *argv[])
{
	int max = 25;
	int erg = 1;
	printf("n\t|\tn^2\n");
	for (int i = 0; i < 30; i++)
	{
		printf("-");
	}
	
	int i = 1;
	while (i <= max)
	{
		printf("\n%d\t|\t%d", i, i*i);
		i = i + 1;
	}
	return 0;
}