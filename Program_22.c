// WAP to swap values of two variables using 3rd variable.

#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf(" Before swapping a = %d and b = %d\n", a,b);
    int temp = a;
    a = b;
    b = temp;
    printf(" After swapping a = %d and b = %d", a,b);
}