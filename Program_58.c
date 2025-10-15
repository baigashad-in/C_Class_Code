// WAP to check to print all armstrong between 1 to n.

#include<stdio.h>
#include<math.h>
void main()
{
    int num, digit, input_num;
    printf("Enter a number : ");
    scanf("%d", &input_num);
    int counter = 0;

    for( int b=1; b<=input_num; b++)
    {
        int count = 0;
        int temp = b;
        double sum = 0;

        for(num = b ; num > 0; num = num/10) 
        {
            count = count + 1;
        }

        num = temp;

        for(num=b ; num > 0; num = num/10)
        {
            digit = num%10;
            sum = sum + pow(digit,count);
        }

        if(temp == sum)
        {
            printf(" %d is a armstrong number\n ", temp);
            printf("Sum of digits in %d = %.0lf \n\n", temp, sum);
            counter++;
        }   
    }
    printf("Count of Armstrong numbers between 1 to %d is %d\n", input_num, counter); 
}