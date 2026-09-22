/*nagative elements in 1d array */
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5],n,i;

	printf("Enter array size:");
	scanf("%d",&n);

	printf("enter array elements:\n");

	for(i=0;i<n;i++)
	{
	   printf("a[%d]=", i);
	   scanf("%d",&a[i]);
	}
	printf("negative elements are:");
	for(i=0;i<n;i++)
	{
	  if(a[i]<0)
	  {
	    printf("\na[%d] = %d", i, a[i]);
	  }
	}

	getch();

}