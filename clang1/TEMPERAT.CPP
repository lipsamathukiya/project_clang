/*Develop a program that converts temperature from degrees celsius to
 fahrenheit using the formula :f=(9/5*c)+32*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float c,f;
	printf("enter temperature in celsius:");
	scanf("%f",&c);
	f=(9.0/5.0*c)+32;
	printf("temperature in fahrenheit:%.2f",f);
	getch();

}