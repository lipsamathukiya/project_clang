/* subject mark*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int s1,s2,s3,s4,s5;
	float total,avg;

	printf("Enter marks of 5 subjects:\n");
	scanf("%d %d %d %d %d", &s1,&s2,&s3,&s4,&s5);

	total =s1+s2+s3+s4+s5;
	avg=total/5;

	printf("Average =%2.f\n",avg);

	if(avg>=90)
		printf("Grade = A+");
	else if(avg >=80)
		printf("Grade = A");
	else if(avg >=70)
		printf("Grade = B");
	else if(avg >=60)
		printf("Grade = C");
	else if(avg >=50)
		printf("Grade = D");
	else
		printf("Grade =Fail");
	getch();
}