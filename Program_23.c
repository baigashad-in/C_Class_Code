// WAP to swap values of two variable without using 3rd variable.

#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf(" Before swapping a = %d and b = %d\n", a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf(" After swapping a = %d and b = %d", a,b);
}