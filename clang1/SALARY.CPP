/* create a program that calculates the gross salary by adding percentages of
HRA,DA and TA to the salary as chosen by the user*/

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float basic,hra,da,ta,gross;

	printf("enter basic salary:");
	scanf("%f",&basic);

	printf("enter hra percentage:");
	scanf("%f",&hra);

	printf("enter da percentage:");
	scanf("%f",&da);

	printf("enter ta percentage:");
	scanf("%f",&ta);

	hra = basic * hra/100;
	da =basic *da/100;
	ta = basic *ta/100;

	gross= basic +hra+da+ta;

	printf("\n gross salary: rs. %.2f",gross);
	getch();
}

