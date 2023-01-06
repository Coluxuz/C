#include <stdio.h>
int mian() {
	float a =1,b=2;
	int x,i;
	printf("please enter x = ");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		a=a*b;
	}
	printf("Answer = %.2f",a);
}