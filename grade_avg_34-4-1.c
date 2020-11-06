#include <stdio.h>
#include <algorithm>

int main()
{
	int g[10], sum, avg, i, b;
	int min = 0, max = 0;
	int total = 0;
	sum = 0;

	for (i = 0; i < 10; i++) {
		printf("enter some thing: ");
		scanf_s("%d", &g[i]);

		if (g[i] == -1) {
			printf("\nERROR EXIT PROGRAM !");
			exit(EXIT_FAILURE);
		}
		else if (g[i] >= 80) {
			printf("A\n");
		}
		else if (g[i] >= 75) {
			printf("B+\n");
		}
		else if (g[i] >= 70) {
			printf("B\n");
		}
		else if (g[i] >= 65) {
			printf("C+\n");
		}
		else if (g[i] >= 60) {
			printf("C\n");
		}
		else if (g[i] >= 55) {
			printf("D+\n");
		}
		else if (g[i] >= 50) {
			printf("D\n");
		}
		else if (g[i] < 49) {
			printf("F\n");
		}
		sum += g[i];
		total += sum;
	}
	avg = sum / i;
	printf("sum is %d\n", avg);

	min = g[0];
	for (i = 0; i < 10; i++)
	{
		if (min > g[i])
			min = g[i];
		else if (max < g[i])
			max = g[i];
	}
	printf("The maxinum is %d\n", max);
	printf("The mininum is %d", min);

	return 0;
}