// WAP to print all palindrome numbers between 101 to 999.

#include<stdio.h>
void main()
{
 int num, digit;
 int counter = 0;
 for(int a = 101; a<=999; a++)
 {
    int sum = 0;
    int temp = num;
    for(num=a ; num > 0; num = num/10)
    {
        digit = num%10;
        sum = sum*10 + digit;
    }

    if(a == sum)
    {
        printf("%d is a palindrome number.\n", a);
        counter++;
    }
 }
 printf("\nCount of palindrome numbers between 101 to 999 is %d",counter);
}