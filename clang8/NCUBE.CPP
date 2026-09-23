#include<stdio.h>
#include<conio.h>
void cube(int a[10][10],int n)
{
	int i,j;

	printf("\nCube of all elements:\n");

	for(i=0; i<n; i++)
	{
	   for(j=0; j<n; j++)
	   {
	      printf("%d ",a[i][j]*a[i][j]*a[i][j]);
	   }
	   printf("\n");
	}
}
void main()
{
	clrscr();

	int a[10][10];
	int i,j,n;

	printf("Enter array's size: ");
	scanf("%d", &n);

	printf("\nEnter array elements:\n");

	for(i=0; i<n; i++)
	{
	   for(j=0;j<n ;j++)
	   {
	      printf("a[%d][%d] = ",i,j);
	      scanf("%d",&a[i][j]);
	   }
	}
	cube(a,n);

	getch();
}