// WAP to create a UDF to return factorial of a given number.
// --- double Factorial(int num)

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
    int i;
    double res;
    printf("Enter a number to find factorial of : ");
    scanf("%d",&i);
    res = Factorial(i);
    printf("Factorial of %d is %.0lf.", i, res);
}