#include <stdio.h>
int main(){
	int i,x,a[10],b[10];
	
	printf("enter amount of number:");
	scanf("%d",&x);
	printf("==============================\n");
	printf("==============================\n");
	for(i=1;i<=x;i++){
		printf("enter number in array A:");
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	printf("==============================\n");
	printf("==============================\n");
	for(i=1;i<=x;i++){	
		printf("number in array B is: %d\n",b[i]);
	}
}
