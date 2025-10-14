// WAP to print all perfect numbers between 1 to n

#include<stdio.h>
void main()
{
    int num;
    printf("Enter value of num : ");
    scanf("%d", &num);
    int counter = 0;
    for(int b =1; b<num; b++)
    {
        int sum = 0;
        for( int a = 1; a<b; a++) // loop runs n times & condition is checked n+1 times
        {
            if (b%a == 0)
            {
                sum = sum +a ;
            }
        }
        if(sum == b)
        {
            printf(" Sum of Factors = %d \n", sum);
            printf(" %d is a perfect number\n\n", b);
            counter++;
        }
    }
    printf("Number of perfect number between 1 to %d is %d\n", num, counter);
}
