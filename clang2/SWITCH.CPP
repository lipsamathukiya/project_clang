/* switch */
#include<stdio.h>
#include<conio.h>

void main()
{
    char grade;

    clrscr();

    printf("Enter your grade: ");
    scanf("%c",&grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent work!");
            break;

        case 'B':
            printf("Well done!");
            break;

        case 'C':
            printf("Good job!");
            break;

        case 'D':
            printf("You passed, but you could do better.");
            break;

        case 'E':
            printf("You passed, but you could do better.");
            break;

        case 'F':
            printf("Sorry, you failed.");
            break;
    }

    getch();
}