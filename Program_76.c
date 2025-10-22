// WAP to create a UDF to find largest number between 3 numbers.
// --- void GreaterIn3(int a, int b, int c)

#include<stdio.h>
void GreaterIn3(int a, int b, int c)
{
    if (a > b && a > c)
    {
        printf("%d is largest among three numbers. ", a);
    }
    else if (b > c && b > a)
    {
        printf("%d is largest among three numbers. ", b);
    }
    else if (c > b && c > a)
    {
        printf("%d is largest among three numbers. ", c);
    }
    else
    {
        printf("Enter three unequal numbers only.");
    }

}

void main()
{
    int a, b, c;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    GreaterIn3(a, b, c);
}