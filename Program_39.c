// WAP to input a number and sum of digits in a number.
#include<stdio.h>
void main()
{
 int num, digit;
 printf("Enter a number : ");
 scanf("%d", &num);
 int sum = 0;
 int temp = num;
 for( ; num > 0; num = num/10) /*initialization is done using scanf*/
 {
    digit = num%10;
    sum = sum + digit;
 }
 printf("Sum of digits of %d = %d \n", temp, sum);

}