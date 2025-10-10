// WAP to input a number and print square of all digits.
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
    sum = digit*digit;
    printf("Square of %d = %d \n", digit, sum);
 }
}