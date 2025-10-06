// WAP to print all even numbers within n to 100 where n is less than 100.

#include<stdio.h>
void main()
// {
//     int a, n;
//     printf("Enter value of n : ");
//     scanf("%d", &n);
//     if(n<=100)
//     {
//         for(a = n; a<=100; a++) // loop runs 100-n+1 times
//         {
//             if(a%2==0)
//             {
//                 printf("%d ", a);
//             }
//         }
//     }
//     else
//     {
//         printf("Kindly enter a value less than 100.");
//     }
// }

// Above program can also be written as : 
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    if(n<=100)
    {
        for( ; n<=100; n++) // loop runs 100-n+1 times
        {
            if(n%2==0)
            {
                printf("%d ", n);
            }
        }
    }
    else
    {
        printf("Kindly enter a value less than 100.");
    }
}

// When we don't have to check if n<=100 or not. We can write above program like this:

        // for( scanf("%d", &n); n<=100; n++) // loop runs 100-n+1 times
        // {
        //     if(n%2==0)
        //     {
        //         printf("%d ", n);
        //     }
        // }