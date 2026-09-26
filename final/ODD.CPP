/*odd*/
#include<stdio.h>
#include<conio.h>
void odd(int a[],int n)
{
    int i;

    printf("Odd Elements are:\n");

    for(i=0; i<n; i++)
    {
      if(a[i] %2 !=0)
      {
	 printf("%d ",a[i]);
      }
    }
}
void main()
{
	clrscr();
	int a[10],n,i;

	printf("Enter size of array:");
	scanf("%d",&n);

	printf("Enetr array elements:\n");

	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	odd(a,n);
     getch();
}

