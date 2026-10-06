/*Develop a program that takes a score out of 100 as input from the
user and calculates the corresponding grade using a ternary operator
allocate grades from A to F for various ranges*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int mark;
	char grade;

	printf("Enter your number:");
	scanf("%d",&mark);

    grade = (mark >= 90) ? 'A' :
	    (mark >= 80) ? 'B' :
	    (mark >= 70) ? 'C' :
	    (mark >= 60) ? 'D' :
	    (mark >= 50) ? 'E' : 'F';

    printf("Your grade is %c", grade);


	getch();
}
