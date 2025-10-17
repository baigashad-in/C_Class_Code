// WAP to print reverse number of all numbers between 101 to 999.

#include<stdio.h>
void main()
{
int num, digit;
for(int a=101; a<=999; a++)
{
    int sum = 0;
    int temp = num;
    for( num = a; num > 0; num = num/10) 
    {
        digit = num%10;
        sum = sum*10 + digit;
    }
    printf("Reverse of number %d = %d \n", a, sum);
}
}