#include<stdio.h>
#include<conio.h>
 void main()
 {
	clrscr();
	int a[5][5], r, c, i, j, max;
	printf("enter row size: ");
	scanf("%d",&r);

	printf("enter  column size: ");
	scanf("%d",&c);

	for(i=0; i<r; i++)
	{
	   for(j=0; j<c; j++)
	   {
	   printf("a[%d][%d] = ", i, j);
	      scanf("%d",&a[i][j]);
	   }
	}
	max=a[0][0];

	for(i=0; i<r; i++)
	{
	   for(j=0; j<c; j++)
	   {
	     if(a[i][j] > max)
	   {
	     max = a[i][j];
	   }
	}
    }
    printf("largest element = %d", max);
	getch();
 }