#include<stdio.h>
#include<conio.h>

void main()
{
    int r,c;

    clrscr();

    for(r=1; r<=5; r++)
    {
        for(c=1; c<=5; c++)
        {
            if(r==1 || r==3)
            {
                printf("* ");
            }
            else if(r==2)
            {
                if(c==1 || c==5)
                    printf("* ");
                else
                    printf("  ");
            }
            else if(r==4 || r==5)
            {
                if(c==1)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }

    getch();
}