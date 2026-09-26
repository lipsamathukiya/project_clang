/*2d array*/
#include<stdio.h>
#include<conio.h>
float average(int a[10][10],int r,int c)
{
	int i,j,sum=0;

	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)
	   {
	     sum=sum+a[i][j];
	   }
	}
   return(float)sum/(r*c);
}
void main()
{
   clrscr();
   int a[10][10],r,c,i,j;
   float avg;

   printf("Enter number of rows:");
   scanf("%d",&r);

   printf("Enter number of columns:");
   scanf("%d",&c);

   printf("Enter array elements:\n");

   for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
     {
       scanf("%d",&a[i][j]);
     }
   }
   avg=average(a,r,c);

   printf("Average =%.2f",avg);

   getch();
}