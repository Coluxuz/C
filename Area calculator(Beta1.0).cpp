#include <stdio.h>
#include <math.h>
int trapezoid(int pa, int pb, int b, int h);
float circle(float r);
int octagon(int d);
float triangle(float a, float b);
float cube(float z);
float pyramid(float b);


int main()
{
	int a, n;
	printf("press : 1 to continue\n");
	printf("press : 0 to exite\n");
	scanf_s("%d", &a);
	if (a == 10) {
		while (a > 0) {
			printf("\n| |#################################################|-||O||X|\n");
			printf("| |# Enter number of function to use function calculate    #| |\n");
			printf("| |#  1.Trapezoid  (press 2)                               #| |\n");
			printf("| |#  2.Circle     (press 3)                               #| |\n");
			printf("| |#  3.Octagon    (press 4)                               #| |\n");
			printf("| |#  4.Triangle   (press 5)                               #| |\n");
			printf("| |#  5.Cube       (press 6)                               #| |\n");
			printf("| |#  6.Pyramid    (press 7)                               #| |\n");
			printf("| |#########################################################| |\n");
			printf("   ENTER HERE ===> ");
			scanf_s("%d", &a);
			if (a == 1) {
				int a, b, c, d;
				printf("   enter |A|side |B|side Base and Hight::");
				scanf_s("%d%d%d%d", &a, &b, &c, &d);
				trapezoid(a, b, c, d);
			}
			else if (a == 3)
			{
				float x;
				printf("   enter radius::");
				scanf_s("%f", &x);
				circle(x);
			}
			else if (a == 3)
			{
				int s;
				printf("   enter lenght of some side::");
				scanf_s("%d", &s);
				octagon(s);
			}
			else if (a == 4)
			{
				float f, g;
				printf("   enter base and hight::");
				scanf_s("%f%f", &f, &g);
				triangle(f, g);
			}
			else if (a == 5)
			{
				int v;
				printf("   enter lenght of side::");
				scanf_s("%d", &v);
				cube(v);
			}
			else if (a == 6)
			{
				int n;
				printf("   enter lenght of side::");
				scanf_s("%d", &n);
				pyramid(n);
			}
			if (a > 6) {
				printf("| |#################   ALERT   ###########|-||o||x|\n");
				printf("| |#                                           #| |\n");
				printf("| |#     PLEASE ENTER NUMBER LESS THAN 7       #| |\n");
				printf("| |#                                           #| |\n");
				printf("| |#############################################| |\n");
			}
		}
	}
	if (a == 0) {
		printf("PROGRAM HAS EXITED PRESS SOME BUTTON TO CLOSE COMMAND LINE :: \n");
		printf("| |#######################################################| |\n");
		printf("| |#                                                     #| |\n");
		printf("| |#         ERROR 404 PLEASE CONNECT TO EMPLOYEE        #| |\n");
		printf("| |#    link :: https://www.facebook.com/ome.za.395      #| |\n");
		printf("| |#                                                     #| |\n");
		printf("| |#######################################################| |\n");
		printf("| |#                                                     #| |\n");
		printf("| |#               #####  THANK YOU  #####               #| |\n");
		printf("| |#                                                     #| |\n");
		printf("| |#######################################################| |\n");

	}
}

/*function*/
int trapezoid(int pa, int pb, int b, int h)
{
	float sum;
	sum = ((pa + pb) * b * h * 1 / 2);
	printf("   area of pentagon is %.6f\n", sum);
	return sum;
}
float circle(float r)
{
	float area;
	area = 3.14 * r * r;
	printf("   area is %.6f\n", area);
	return area;
}
int octagon(int d)
{
	float area;
	area = (2 * (1 + sqrt(2) * pow(d, 2)));
	printf("   area is %.6f\n", area);
	return area;
}
float triangle(float a, float b)
{
	float area;
	area = (a * b * 1 / 2);/*'1/2*5*3'*/
	printf("   area is %.6f\n", area);
	return area;
}
float cube(float z)
{
	float area;
	area = pow(z, 3);
	printf("   value is %.6f\n", area);
	return area;
}
float pyramid(float b)
{
	float area;
	area = (pow(b, 3) / (6 * sqrt(2)));
	printf("   value is %.6f\n", area);
	return area;
}