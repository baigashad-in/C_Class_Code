// WAP to check if it is a prime number using break statement.

#include<stdio.h>
void main()
{
    int num, a;
    printf("Enter a number to check prime or not : ");
    scanf("%d", &num);
    // for(int a = 2; a<=(num-1); a++)
    // {
    //     if(num%a==0) // if we found one factor or first factor of the num then we no need to check for further, num is not a prime.
    //     {
    //         printf("%d is not a prime number", num);
    //         break;
    //     }
    //     else
    //     {
    //         printf("%d is a prime number", num);
    //         break;
    //     }
    // }

    for( a = 2; a<=(num-1); a++)
    {
        if(num%a==0) // if we found one factor or first factor of the num then we no need to check for further, num is not a prime.
        {
            break;
        }
    }
    if(a == num) // To check whether all iterations of loop ran or loop was broken before attaining end condition, we used looping variable as here we know looping variable after checking condition will attain value = num.
    {
        printf("%d is a prime number", num); // If all iterations of loop are executed and value of looping variable reaches end condition, it means that none of the value was able to completely divide the num. Hence num is a prime number.
    }
    else
    {
        printf("%d is not a prime number", num); // If we find even a single value of 'looping variable it means there is a value(other than 1 and self) which completely divides the num. Hence it is not a prime number
    }
    
}