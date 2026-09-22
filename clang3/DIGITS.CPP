/*total number of digits counts*/
#include<stdio.h>
#include<conio.h>

void main()
{
    long int num;
    int count=0;

    clrscr();

    printf("Enter any number: ");
    scanf("%ld",&num);

    do
    {
        count++;
        num=num/10;
    }
    while(num!=0);

    printf("Total number of digits: %d",count);

    getch();
}