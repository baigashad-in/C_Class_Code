// WAP to create a UDF to print all armstrong number between 100 to 900.
// --- int Length(int num)
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
        double sum = 0;
        num = b;

        for(num=b ; num > 0; num = num/10) 
        {
            digit = num%10;
            sum = sum + pow(digit,Length(b));
        }

        if(b == sum)
        {
            return b;
        }
        else
        {
            return 0;
        }
}

void main()
{
    int res, i;
    for(int a = 100; a<=9999; a++)
    {
        res = IsArmstrong(a);
        if(res != 0)
        {
            printf("%d ", res);
        }
    }
}