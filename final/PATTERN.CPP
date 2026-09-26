/*pattern*/
#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int r,c,s;

    for(r=10;r>=6;r--)
    {
       for(s=6;s<r;s++)
       {
	 printf("  ");
       }
       for(c=r;c<=10;c++)
       {
	printf("%d ", c);
       }
       printf("\n");
    }
    getch();

}