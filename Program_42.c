// WAP to calculate n^m without using predefined function.

#include<stdio.h>
void main()
{
    int n, m;
    printf("Enter the value of base : ");
    scanf("%d",&n);
    printf("Enter the value of power : ");
    scanf("%d",&m);
    int result = 1;
    for(int a = 1 ; a<=m; a++)
    {
        result = result * n;
    }
    printf("%d ", result);
}
