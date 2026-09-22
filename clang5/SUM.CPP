#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5][5],r,c,i,j;
	int row,col, sum=0;
	printf("enter row size: ");
	scanf("%d",&r);

	printf("enter column size: ");
	scanf("%d",&c);

	printf("enter array elements:\n");

	for(i=0;i<r;i++)
	{
	  for(j=0;j<c;j++)
	  {
	    printf("a[%d][%d]=",i,j);
	    scanf("%d",&a[i][j]);
	  }
	}

	printf("\nenter row number: ");
	scanf("%d",&row);

	    printf("elements of row %d:",row);

	    sum=0;

	    for(j=0;j<c;j++)
	    {
	     printf("%d",a[row][j]);
	     sum=sum+a[row][j];
	    }
	    printf("\n the sum of row %d: %d",row,sum);

		printf("\n\nenter column number: ");
		scanf("%d",&col);

	    printf("\n\nenter of column %d:",col);
	    sum=0;

	    for(i=0;i<r;i++)
	    {
	     printf("%d",a[i][col]);
	     sum=sum+a[i][col];
	    }
	    printf("\n the sum of column %d: %d",col,sum);

	getch();
}