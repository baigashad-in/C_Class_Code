// WAP to check if an input number is a palindrome number or not.
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

 if(temp == sum)
 {
    printf("%d is a palindrome number.", temp);
 }
 else
 {
    printf("%d is not a palindrome number.", temp);
 }
}