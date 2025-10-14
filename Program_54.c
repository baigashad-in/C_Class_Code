// WAP to print table of all numbers between 1 to 40

#include<stdio.h>
void main()
{
int table_num;
printf("Enter a number upto which you want to write multiplication table : ");
scanf("%d",&table_num);
    for(int a=1; a<=table_num; a++)
    {
        int num = 1;
        while(num <= 10)
        {
            printf("%d x %d = %d\n", a,num, a*num );
            num++;
        }
        printf("\n");
    }
}
