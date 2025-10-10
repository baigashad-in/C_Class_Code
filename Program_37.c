// WAP to input a number and print sum of even digits and sum of odd digits.
#include<stdio.h>
void main()
{
 int num, digit;
 printf("Enter a number : ");
 scanf("%d", &num);
 int sum = 0; 
 int sum1 = 0;
 int temp = num;
 for( ; num > 0; num = num/10) /*initialization is done using scanf*/
 {
    digit = num%10;
    if(digit%2==0)
    {
        sum = sum + digit;
    }
    else
    {
        sum1 = sum1 + digit;
    }
 }
 printf("Sum of even digits of %d = %d \n", temp, sum);
 printf("Sum of odd digits of %d = %d \n", temp, sum1);
}