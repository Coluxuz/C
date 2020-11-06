#include <stdio.h>
#include <Windows.h>
#include <bits/stdc++.h> 
#include <fstream>
float bmi;
float BMI(float w, float h);
int main()
{
	//variable zone
	float weight, hight,avg,total,favg;
	int id,a,i;
	char name[100];
	FILE *f = fopen("BMI REPORT.txt","a+");
	total = 0;
	avg = 0;
	favg = 0;
	
	//command zone
		system("color 02");
		//system("color 0c");
		printf("\n\n\n\n\n\n\t\t\t\t\t\tWelcome TO BMI Calculator\n\n");

		char c = 177, d = 219;
		printf("\t\t\t\t\t\t");

		for (int i = 0; i < 25; i++)
			printf("");
		Sleep(50);
		printf("\r");
		printf("\t\t\t\t\t\t");

		for (int i = 0; i < 25; i++) {
		printf(".");
			Sleep(50);
		}

		system("cls");
	printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n");
	printf("\t\t\t\t= =               >  BMI CALCULATOR  <                 = =\n");
	printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n\n");
	//enter value of students
	printf("\n\n\n\n\n\n\t\t\t\t\t\tEnter value of students : ");
	scanf("%d",&a);
	system("cls");
	printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n");
	printf("\t\t\t\t= =               >  BMI CALCULATOR  <                 = =\n");
	printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n\n");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\tLoading");
	Sleep(0600);
	printf(".");
	Sleep(0600);
	printf(".");
	Sleep(0600);
	printf(".\n");
	system("cls");
	printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n");
	printf("\t\t\t\t= =               >  BMI CALCULATOR  <                 = =\n");
	printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n\n");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\tLoading");
	Sleep(0600);
	printf(".");
	Sleep(0600);
	printf(".");
	Sleep(0600);
	printf(".\n");
	system("cls");
	if(a<=0){
		printf("\n\n| |###############################| |");
		printf("\n| |_____ERROR PLESE TRY AGAIN_____| |");
		printf("\n| |Pres ENTER to close the program| |");
		printf("\n| |###############################| |\n");
	}
	else{
		for(i=1;i<=a;i++){
				printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n");
				printf("\t\t\t\t= =               >  BMI CALCULATOR  <                  = =\n");
				printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n\n");
			printf("\n\n\n\t\t\t\t\t\tEnter your name : ");
			scanf("%s", &name);
			if (name <= 0) {
				printf("\t\t\t\t\t\tError enter your name again");
			}
			else {
				printf("\t\t\t\t\t\tEnter student id : ");
				scanf("%d", &id);
				if (id <= 10) {
					printf("error your id was wrong");
				}
				else {
				 
					printf("\t\t\t\t\t\tEnter your weight(kg.) : ");
					//printf("\t\t\t\t\t           weight  (kg.) : ");
					scanf("%f", &weight);
					printf("\t\t\t\t\t\tEnter your high(m.) : ");
					//printf("\t\t\t\t\t           hight  (m.) : ");
					scanf("%f", &hight);
					system("cls");
	printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n");
	printf("\t\t\t\t= =               >  BMI CALCULATOR  <                  = =\n");
	printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n\n");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\tLoading");
	Sleep(0600);
	printf(".");
	Sleep(0600);
	printf(".");
	Sleep(0600);
	printf(".\n");
	system("cls");
		printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n");
		printf("\t\t\t\t= =               >  BMI CALCULATOR  <                  = =\n");
		printf("\t\t\t\t= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n\n\n");
					printf("\t\t\t\t\t\t   Name     :: %s",name);
					printf("\n\t\t\t\t\t\t   Hight    :: %.2f   Meter",hight);
					printf("\n\t\t\t\t\t\t   Weight   :: %.2f  Kilograms\n\n",weight);	
					fprintf(f,"\n\nName         :: %s",name);
					fprintf(f,"\nStudent Code   :: %d",id);
					fprintf(f,"\nHight        :: %.2f   Meter\n",hight);
					fprintf(f,"\nWeight       :: %.2f  Kilograms",weight);
					BMI(weight, hight);
					total += bmi;	
					avg = total/i;
					printf("\t\t\t\t\t\t  Average BMI is :: %.2f\n\n\n\n\n",avg);	
					printf("\n\t\t\t\t\t\t          Loading");
					Sleep(0600);
					printf(".");
					Sleep(0600);
					printf(".");
					Sleep(0600);
					printf(".\n");
					system("pause");
					system("cls");
					fprintf(f,"\n\t\t\t Your BMI is :: %.2f",bmi);
					fprintf(f,"\n\t\t\t Average BMI is :: %.2f",avg);
				}
				favg += total;
			}
		}
		fclose(f);
	}
	return 0;
}

float BMI(float w, float h)
{
	
	bmi = w/(h * h);
	printf(" ");
			("");
	printf("\n\t\t\t\t\t\t   Your BMI is  :: %.2f\n", bmi);
	if(bmi<=18.5){
		printf("\t\t\t\t\t             You are very slim\n");
		printf("\t\t\t\t\t            You should eat more \n");	
	}
	else if(bmi <=22.9){
		printf("\t\t\t\t\t               You are normal\n");
		printf("\t\t\t\t      You should  exercise every day for better health\n\n");		
	}
	else if(bmi <=24.9){
		printf("\t\t\t\t\t             You are over weight\n");
		printf("\t\t\t\t    You should  exercise every day for loss your weight\n");	
	}
	else if(bmi <=29.9){
		printf("\t\t\t\t\t               You are fat\n");
		printf("\t\t\t\t You should eat clean and exercise every day for loss weight\n");	
	}
	else if(bmi >=30.0){
		printf("\t\t\t\t\t               You are very fat\n");
		printf("\t\t\t\t You should eat clean and exercise every day for loss weight\n");
		printf("\t\t\t\t\t                   Fighting\n ");		
	}
	
	return bmi;
}
