#include <stdio.h>
int main(int argc, char *argv[])
{
	int Multiplikator, Multiplikand;//Variablen Definition
	int produkt = 0;
	
	printf("Bitte geben sie die erste Zahl für die Multiplikation ein");
	scanf("%d", &Multiplikator);
	printf("Bitte geben sie die zeite Zahl für die Multiplikation ein");
	scanf("%d", &Multiplikand);
	
	while (Multiplikator >= 1)
	{
		if (Multiplikator % 2)
		{
			produkt = produkt + Multiplikand;
		}
		Multiplikator = Multiplikator / 2;
		Multiplikand = Multiplikand * 2;
	}
	printf("Das Produkt ist %d", produkt);
	scanf("%d");
	return 0;
}