// WAP to input a number and count how many numbers are present between 1 to n which are divisible by 3 and 7.


#include<stdio.h>
void main()
{
    int num, counter = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int a=1; a<=num; a++)
    {
        if((a%3==0) && (a%7==0))
        {
            counter++;
        }
    }
    printf("Count of numbers between 1 to %d, which are divisible by 3 and 7 are %d \n", num, counter);
}