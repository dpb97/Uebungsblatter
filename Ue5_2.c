#include <stdio.h>
int main(int argc, char *argv[])
{
	int a;//Variablen Definition
	int b;
	printf("Bitte Geben sie eine Ganzzahl an welle in Binär umgerechnet werden soll: \n");
	scanf("%d", &a);
	int zahl = a;
	b = a;
	while (a >= 1)
	{
		printf("%d\t|", a);
		printf("%d \n", a % 2);
		a = a / 2;
	}

	int erg = 0;
	int rest = 0;
	int fak = 1;
	while(b)
	{
		rest = b % 2;
		b = b / 2;
		erg = erg + rest * fak;
		fak = fak * 10;
	}
	
	printf("%d ist in binar %d",zahl, erg);
	return 0;
}