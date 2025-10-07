// WAP to print all odd numbers within n to 100 where n is less than 100.

#include<stdio.h>
void main()
{
        int n;
        printf("Enter value of n : ");
        scanf("%d", &n);
        if(n<=100)
        {
            for( ; n<=100; n++) // loop runs 100-n+1 times
            {
                if(n%2==1)
                {
                    printf("%d ", n);
                }
            }
        }
        else
        {
            printf("Kindly enter a value less than 100.");
        }
}