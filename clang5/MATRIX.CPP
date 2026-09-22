#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5][5],n ,i, j;
	printf("enter row & columns size: ");
	scanf("%d",&n);

	printf("enter array elements:\n");

	for(i=0; i<n; i++)
	{
	   for(j=0;j<n;j++)
	   {
	      printf("a[%d][%d]=",i,j);
	      scanf("%d",&a[i][j]);
	   }
	}
	printf("\ntranspose matrix:\n");

	for(i=0; i<n; i++)
	{
	  for(j=0;j<n;j++)
	  {
	    printf("%d ",a[j][i]);
	  }
	  printf("\n");
	}
	getch();

}