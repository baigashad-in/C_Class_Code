// WAP to create a UDF to print factorial of all numbers between 1 to 10 using UDF --- double Factorial(int num)

#include<stdio.h>

double Factorial(int num)
{
    double multiples = 1;
    for (int i=1; i<=num; i++)
    {
        multiples = multiples*i;
    }
    return multiples;
}

void main()
{
    int n, i;
    double res;
    printf("Enter a number upto which you want to find factorial : ");
    scanf("%d",&i);
    for(n=1; n<=i;n++)
    {
        res = Factorial(n);
        printf("Factorial of %d is %.0lf.\n", n, res);

    }
}