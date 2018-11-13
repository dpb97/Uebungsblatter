#include <stdio.h>
int main(int argc, char *argv[])
{
	int Grundkapital = 1000;
	int Zinsen = 5;
	int Dauer = 10;
	printf("Kapitalentwicklung für Grundkapital : %d EUR\n",Grundkapital);
	printf(" Fixzinssatz: %d %, Laufzeit %d Jahre", Zinsen, Dauer);
	printf("\nJahr\tKapital\n");
	for (int i = 0; i < 20; i++)
	{
		printf("-");
	}
	float Kapital = Grundkapital;
	for (int i = 1; i <= Dauer; i++)
	{
		Kapital = Kapital + (Kapital * Zinsen)/100;
		printf("\n%d\t%.2f", i, Kapital);
	}
	return 0;
}