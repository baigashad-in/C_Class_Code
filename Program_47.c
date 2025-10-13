// WAP to check whether a input number is armstrong number or not.

#include<stdio.h>
#include<math.h>
void main()
{
    int num, digit;
    // int sum = 0;
    double sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    int count = 0;
    int temp = num;
    for( ; num > 0; num = num/10) /*initialization is done using scanf*/
    {
        count = count + 1;
    }

    num = temp;

    for( ; num > 0; num = num/10) /*initialization is done using scanf*/
    {
        digit = num%10;
        // sum = sum + pow(digit,count);
        int digit_product = 1;
        for(int a=1; a<=count; a++)
        {
            digit_product = digit_product*digit;
        }
        printf(" digit_product = %d ", digit_product);
        sum = sum + digit_product;

    }

    if(temp == sum)
    {
        printf(" %d is a armstrong number ", temp);
    }
    else
    {
        printf(" %d is not a armstrong number ", temp);

    }
    
    printf("Sum of digits in %d = %.0lf \n", temp, sum);
    // printf("Number of digits in %d = %d \n", temp, sum);



    //  double result = pow(temp, count);


}