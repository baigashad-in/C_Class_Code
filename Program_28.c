//  WAP to print all numbers within 1 to n where n is greater than 1.

#include<stdio.h>
void main()
{
        int n;
        printf("Enter value of n : ");
        scanf("%d", &n);
        if(n>=1)
        {
            for( int a = 1; a<=n; a++) // loop runs n+1 times
            {
                {
                    printf("%d ", a);
                }
            }
        }
        else
        {
            printf("Kindly enter a value more than 1.");
        }
}