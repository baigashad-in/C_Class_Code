// WAP to input a number and count & print the number of digits in a number.
#include<stdio.h>
void main()
{
 int num, digit;
 printf("Enter a number : ");
 scanf("%d", &num);
 int count = 0;
 int temp = num;
 for( ; num > 0; num = num/10) /*initialization is done using scanf num*/
 {
    digit = num%10;
    count = count + 1;
    // count++;
 }
 printf("Number of digits in %d = %d \n", temp, count);

}