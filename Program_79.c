// WAP to create a UDF to check a number is a Armstrong number or not.
// --- int IsArmstrong(int num)

#include<stdio.h>
#include<math.h>
int Length(int num)
{
    int digit, counter_len = 0;
    for( int temp = num ; temp > 0; temp = temp/10)
    {
        digit = temp%10;
        counter_len++;
    }
    return counter_len;
}

int IsArmstrong(int b)
{
        int num, digit, count = 0;
        int temp = b;
        double sum = 0;
        num = temp;

        for(num=b ; num > 0; num = num/10) 
        {
            digit = num%10;
            sum = sum + pow(digit,Length(b));
        }

        if(temp == sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}

void main()
{
    int res, i;
    printf("Enter a number : ");
    scanf("%d",&i);
    res = IsArmstrong(i);
    if (res == 1)
    {
        printf("%d is an Armstrong number.",i);
    }
    else
    {
        printf("%d is not an Armstrong number.",i);
    }
}