// WAP to create a UDF to return number of digits in a number
// --- int Length(int num)

#include<stdio.h>
int Length(int num)
{
    int digit, counter = 0;
    for( int temp = num ; temp > 0; temp = temp/10)
    {
        digit = temp%10;
        counter++;
    }
    return counter;
}

void main()
{
    int res, i;
    printf("Enter a number upto which you want to find perfect numbers : ");
    scanf("%d",&i);
    res = Length(i);
    printf("%d has %d number of digits", i, res);
}