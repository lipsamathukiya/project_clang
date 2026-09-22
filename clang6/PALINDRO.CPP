/* palindrome string */
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char str[20];
	int i,len=0,flag=1;

	printf("enter string: ");
	gets(str);

	while(str[len] != '\0')
	  len++;

	for(i=0; i<len/2; i++)
	{
	    if(str[i] != str[len-1-i])
	    {
	       flag=0;
	       break;
	    }
	}
	if(flag)
	    printf(" The given string is a palindrome");
	else
	    printf("The given string is not palindrome");
	getch();
}


