// WAP to create a UDF to print prime numbers within 1 to 1000 using UDF --- int IsPrime(int num).

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
            return num;
        }
        else
        {
            return 0;
        }
    }
    
}


void main()
{
    int n, res, i;
    printf("Enter a number upto  which you want to print prime numbers : ");
    scanf("%d",&i);
    for(n=2; n<i; n++)
    {
        res = IsPrime(n);
        if(res ==n)
        {
            printf("%d ", n);
        }
        
    }
}