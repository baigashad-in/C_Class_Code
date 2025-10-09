// WAP to reverse a number.
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
    sum = sum*10 + digit;
 }
 printf("Reverse of number %d = %d ", temp, sum);
}