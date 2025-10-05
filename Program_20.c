#include<stdio.h>
void main()
{
    int table_num;
    printf("Enter a number to write multiplication table : ");
    scanf("%d",&table_num);
    int num = 1;
    while(num <= 10)
    {
        printf("%d x %d = %d\n", table_num,num, table_num*num );
        num++;
    }
}