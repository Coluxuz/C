#include <stdio.h>
#include <windows.h>

int main(){
	int a[5],b[5],i;
	printf("enter array A:\n");
	for(i = 1;i <= 5;i++){
		scanf("%d",&a[i]);
	}
	printf("enter array B:\n");
	for(i = 1 ; i <= 5 ; i++){
		scanf("%d",&b[i]);
	}
	if(a[i]==b[i]&&sizeof a == sizeof b ){
		printf("these two array are equal!!");
	}
	else{
		printf("these two array are not equal!!");
	}
}
