// WAP to print hour-glass pattern with user input n, where n is odd.

/*

*       *       *       *       *       *       *       *       *
        *       *       *       *       *       *       *
                *       *       *       *       *
                        *       *       *
                                *
                        *       *       *
                *       *       *       *       *
        *       *       *       *       *       *       *
*       *       *       *       *       *       *       *       *

*/


#include<stdio.h>
void main()
{
    int n ;
    printf("Enter a value of n : ");
    scanf("%d",&n);
    printf("\n");
    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j>=i && j <= (n+1-i))
            {
                printf("%c\t",'*');
            }
            else if(j<=i && j >= (n+1-i))
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
