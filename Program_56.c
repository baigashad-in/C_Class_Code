#include<stdio.h>
void main()
{
    for(int i = 1; i<=5; i++)
    {
        for(int j=1; j<=9; j++)
        {
            if((j+i >= 6 && i+j <= 2*(2+i)))
            {
                printf("%c\t",'*');
            }      
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    for(int i = 6; i<=9; i++)
    {
        for(int j=1; j<=9; j++)
        {
            if((j+i <=14 && i+j <= 2*(2+j)))
            {
                printf("%c\t",'*');
            }      
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
