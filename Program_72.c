// WAP to create a UDF check to check a given number is prime or not.
// --- int IsPrime(int num)

#include<stdio.h>

int IsPrime(int num)
{
    int a;
    if(num <=1)
    {
        printf("Kindly enter a number greater than 1.");
        return 0;
    }
    else
    {
        for( a = 2; a<=(num-1); a++)
    {
        if(num%a==0)
        {
            break;
        }
        }
        if(a == num)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
}


void main()
{
    int res, i;
    printf("Enter a number to check whether it is prime or not : ");
    scanf("%d",&i);
    res = IsPrime(i);
    if(res == 1)
    {
        printf("%d is a prime number.", i);
    }
    else
    {
        printf("%d is not a prime number.", i);
    }
}