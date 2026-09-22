/*ternary*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int mark;
	char grade;
	print("Enter your number:");
	scanf("%d",&mark);
    grade = (marks >= 90) ? 'A' :
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' :
            (marks >= 60) ? 'D' :
            (marks >= 50) ? 'E' : 'F';

    printf("Your grade is %c", grade);


	getch();
}
