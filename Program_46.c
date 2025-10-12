// WAP to input 10 numbers and check how many positive numbers, negative numbers and zeros  are inputted.

#include<stdio.h>
void main()
{
 int num, digit;
 printf("Enter a number : ");
 int positive_counter = 0, negative_counter = 0, zero_counter = 0;
 for (int i =1; i<=10; i=i+1)
 {
    scanf("%d", &num);
    if(num >0)
    {
        positive_counter++;
    }
    else if (num < 0)
    {
        negative_counter++;
    }
    else
    {
        zero_counter++;
    }
 }
 printf("Total %d positive values, %d negative values and %d zeros are inputted by user.", positive_counter, negative_counter, zero_counter);
}