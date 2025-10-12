// WAP to input 5 numbers and check how many even and odd numbers are inputted.

#include<stdio.h>
void main()
{
 int num, digit;
 printf("Enter a number : ");
 int even_counter = 0, odd_counter = 0;
 for (int i =1; i<=10; i=i+1)
 {
    scanf("%d", &num);
    if(num%2==0)
    {
        even_counter++;
    }
    else
    {
        odd_counter++;
    }
 }
 printf("Total %d even values and %d odd values inputted by user.", even_counter, odd_counter);
}