// WAP to to print all prime numbers between 1 to n using break statement.

#include<stdio.h>
void main()
{
    int num, a;
    printf("Enter a number upto which you want to find prime numbers : ");
    scanf("%d", &num);
    int counter = 0;
    for(int b = 1; b<=num; b++)
    {
        for( a = 2; a<=(b-1); a++)
        {
            if(b%a==0)
            {
                break;
            }
        }
        if(a == b)
        {
            printf("%d is a prime number\n", b);
            counter++; 
        }
    }
    printf("Count of prime numbers between 1 to %d is %d", num, counter);
}