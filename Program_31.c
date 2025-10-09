// WAP to find Sum of all even number between 1 to 100

#include <stdio.h>
#include <math.h>
void main() 
{
    int sum = 0;
    int num, power_of_ten,  digit_power;
    double rem, digits;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Enter a number of digits: ");
    scanf("%d", &digits);
    for(double a=1; a<= digits; a++ )
    {
            power_of_ten = pow(10,a);
            rem = (num/power_of_ten)%10;
            digit_power = pow(rem,digits);
            sum = sum + digit_power;

    }
    printf("Sum of all even number between 1 to 100 : %d\n", sum);
}