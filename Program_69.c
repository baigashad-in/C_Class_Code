// WAP to print all perfect numbers between 1 to n using UDF having return type with parameters.

#include<stdio.h>

int IsPerfect(int num)
{
    int sum = 0;
    for( int a = 1; a<num; a++)
    {
        if (num%a == 0)
        {
            sum = sum + a ;
        }
    }

    if(sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void main()
{
    int n, res, i, counter = 0;
    printf("Enter a number upto which you want to find perfect numbers : ");
    scanf("%d",&i);
    for(n=2; n<=i; n++)
    {
        res = IsPerfect(n);
        if(res==1)
        {
            printf("%d\t",n);
            counter++;
        }
    }
    printf("\nNumber of perfect number between 1 to %d is %d\n", i, counter);
}




