// WAP to input a number and print number of even digits and number of odd digits.
#include<stdio.h>
void main()
{
 int num, digit;
 printf("Enter a number : ");
 scanf("%d", &num);
 int temp = num;
 int even_counter = 0, odd_counter = 0;

 for( ; num > 0; num = num/10) /*initialization is done using scanf*/
 {
    digit = num%10;
    if(digit%2==0)
    {
        even_counter++;
    }
    else
    {
        odd_counter++;
    }
 }
 printf("Sum of even digits of %d = %d \n", temp, even_counter);
 printf("Sum of odd digits of %d = %d \n", temp, odd_counter);
}