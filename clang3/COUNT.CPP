/*first and last digits sum*/
#include<stdio.h>
#include<conio.h>

void main()
{
    long int num;
    int first, last;

    clrscr();

    printf("Enter any number: ");
    scanf("%ld", &num);

    last = num % 10;

    do
    {
        first = num % 10;
        num = num / 10;
    }
    while(num != 0);

    printf("The sum of the first and the last digit: %d", first + last);

    getch();
}