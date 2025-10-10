// WAP to input a number and print sum of cube of all digits.

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
    sum = sum + digit*digit*digit;
 }
 printf("Cube of %d = %d \n", temp, sum);

}