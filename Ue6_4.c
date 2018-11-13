#include <stdio.h>
int main(int argc, char *argv[])
{
	int values[]= { 3, 5, 7, 8, 1, -1, 4, -112,1100 };
	int min = values[0];
	int max = values[0];
	int sum = 0;
	int count = sizeof(values) / sizeof(values[0]);
	for (int i = 0; i < count; i++)
	{
		if (max < values[i])
		{
			max = values[i];
		}
		if (min > values[i])
		{
			min = values[i];
		}
		sum = sum + values[i];
	}
	float avrg = (float)sum / count;
	printf("mittelwert: %.2f min: %d max %d ", avrg, min, max);
	return 0;
}