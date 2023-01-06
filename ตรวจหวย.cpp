#include <stdio.h>
#include <windows.h>
void loading();
int main(){
	int correct = 659875;
	int inp;
	printf("enter your lotto: ");
	scanf("%d",&inp);
	system("cls");
	loading();
	if(inp == correct){
		printf("congratulation you got 1M usd!!");
	}
	else{
		printf("your number is %d\n",inp);
		printf("the correct number is %d",correct);
	}
}

void loading(){
	system("cls");
	system("Color 01");
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\tloading:: ");
	char x = '/';
	for (int i = 0; i < 35; i++) {
		printf("%c", x);
		Sleep(50);
		if(i>=10&&i<20)
			Sleep(150);
		else if (i >= 10) {
			Sleep(25);
		}
	}
	system("cls");
	system("Color a");
}
