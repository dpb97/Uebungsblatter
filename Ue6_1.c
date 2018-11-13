#include <stdio.h>
int main(int argc, char *argv[])
{
	char string[] = { "2010A" };
	int i = 0;
	int fak = 1;
	while (string[i] >= 48 && string[i] <= 57)
	{
		i++;
	}
	for (int j = 1; j < i; j++)
	{
			fak = fak * 10;
	}
	int erg = 0;
	for (int j = 0; j <= i-1; j++)
	{
		erg = erg + (string[j] - 48)*fak;
		fak = fak / 10;
	}
	printf("%d", erg);
	return 0;
}