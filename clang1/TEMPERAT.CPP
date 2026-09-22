/*Temperature Converter */
#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("enter temperature in celsius:");
	scanf("%f",c);
	f=(9.0/5.0*c)+32;
	printf("temperature in fahrenheit:%.2f",f);
	getch();

}