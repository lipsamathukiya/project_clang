#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char str[20],*p;
	int len;

	printf("Enter any Srting: ");
	gets (str);

	p=str;

	for(len=0; *p!='\0'; len++)
	{
	    p++;
	}
	printf("The length of a string is =%d",len);

	getch();
}
