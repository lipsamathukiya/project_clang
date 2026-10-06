/*Write a program to find the third angle of a right triangle when two
other angles are given*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float first,second,third;

	printf("enter first angle:");
	scanf("%f",&first);

	printf("enter second angle:");
	scanf("%f",&second);

	third =180 -first-second;

	printf("\n thhird angle:%.2f",third);
	getch();
}