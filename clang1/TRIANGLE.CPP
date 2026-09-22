/*triangle angle finder*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float first,second,third;
	clrscr();
	printf("enter first angle:");
	scanf("%f",&first);
	printf("enter second angle:");
	scanf("%f",&second);
	third =180 -first-second;
	printf("\n thhird angle:%.2f",third);
	getch();
}