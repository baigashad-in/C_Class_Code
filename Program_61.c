// WAP to print cube of digits of all numbers between 1 to 50 without using predefined function.

#include<stdio.h>
void main()
{
 int num, digit;
 for(int a=1; a<=50; a++)
 {
    int sum = 0;
    int temp = num;
    for(num=a ; num > 0; num = num/10) /*initialization is done using scanf*/
    {
       digit = num%10;
       sum = sum + digit*digit*digit;
    }
    printf("Cube of digits %d = %d \n", a, sum);
 }
}