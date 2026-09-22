#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	for(int r=5;r>=1;r--)
	{
	for(int s=1;s<r;s++)
	{
	printf(" ");
	}

	for(int c=r;c<=5;c++)
	{
	printf("%d",c);
	}
	printf("\n");
	}

	getch();

}