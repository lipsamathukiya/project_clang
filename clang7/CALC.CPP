#include<stdio.h>
#include<conio.h>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int divi(int a,int b)
{
    return a/b;
}

int mod(int a,int b)
{
    return a%b;
}

void main()
{
    int a,b,ch;
    char ans;

    clrscr();

    do
    {
	printf("Enter First Number : ");
	scanf("%d",&a);

	printf("Enter Second Number : ");
	scanf("%d",&b);
	printf("\n Press 1 for +");
	printf("\n Press 2 for -");
	printf("\n Press 3 for *");
	printf("\n press 4 for /");
	printf("\n press 5 for %");
	printf("\n Press 0 the exit");

	printf("\n\nEnter Choice : ");
	scanf("%d",&ch);

	if(ch==0)
	{
	  break;
	}

	switch(ch)
	{
	    case 1:
		printf("\nAddition %d and  %d is = %d",a,b,add(a,b));
		break;

	    case 2:
		printf("\nSubtraction %d and %d is = %d",a,b,sub(a,b));
		break;

	    case 3:
		printf("\nMultiplication %d and %d is= %d",a,b,mul(a,b));
		break;

	    case 4:
		printf("\nDivision %d and %d is = %d",a,b,divi(a,b));
		break;

	    case 5:
		printf("\nModulus %d and %d is= %d",a,b,mod(a,b));
		break;

	    default:
		printf("\nInvalid Choice");
	}

	printf("\n");

    }while(1);

    getch();
}