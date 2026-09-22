#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int r,c,s,n=5;
	int count;
	for(r=1; r<=n; r++)
	{
		count=r;
		for(c=1; c<=count; c++)
		{
		printf("%d ",c);
		}
		for(s=4*(n-r); s>=1; s--)
		{
		printf(" ");
		}
		for(c=count; c>=1; c--)
		{
		printf("%d ",c);
		}
		printf("\n");
		}

	getch();
}
