#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE
float METER(float f);
float FEET(float m);
float M, F,sum;
int main()
{
	int  b[5],i;
	for (i = 0; i <= 5; i++) {
		while (b[i] <= 5) {
			printf("\n\npress 1. to calculate Feet  to Meter \npress 2. to calculate Meter to Feet\n");
			scanf_s("%d", &b);
			if (b[i] == 1) {
				printf("\nenter Meter to change to Feet:");
				scanf_s("%f", &F);
				METER(F);
			}
			else if (b[i] == 2) {
				printf("\nenter Feet to change to Meter:");
				scanf_s("%f", &M);
				FEET(M);
			}
		}
	}
	printf("%.2f is = %.2f Meter", F, sum);
	printf("%.2f is = %.2f Feet", M, sum);
}

float METER(float f) {
	float sum;
	sum = 0.305 * f;
	return sum;
}
float FEET(float m) {
	float sum;
	sum = m/0.305;
	return sum;
}
