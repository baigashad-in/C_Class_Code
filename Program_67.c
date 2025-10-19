// WAP to print hollow diamond/rhombus with user input of n, where n is odd:


/* 
                                *
                        *               *
                *                               *
        *                                               *
*                                                               *
        *                                               *
                *                               *
                        *               *
                                *

 */

#include<stdio.h>
void main()
{
    int n ;
    printf("Enter a value of n : ");
    scanf("%d",&n);
    printf("\n");
    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j+i == (n-((n-3)/2)) || j+i == (2*n-((n-3)/2)-1) || i+j == 2*(n/4+i) || i+j == 2*(n/4+j) )
            {
                printf("%c\t",'*');

            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}



// #include <stdio.h>
// void main() 
// {
//     int n ;
//     printf("Enter a value of n : ");
//     scanf("%d",&n);
//     printf("\n");  

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         for (int j = 1; j <= 2 * i - 1; j++) {
//             if (j == 1 || j == 2 * i - 1) {
//                 printf("*");  
//             } else {
//                 printf(" ");  
//             }
//         }
//         printf("\n");
//     }

   
//     for (int i = n - 1; i >= 1; i--) {
       
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

       
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             if (j == 1 || j == 2 * i - 1) {
//                 printf("*");  
//             } else {
//                 printf(" ");  
//             }
//         }
//         printf("\n");
//     }
// }






// #include<stdio.h>
// void main() 
// {
//     int n;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);

//     if (n % 2 == 0) {
//         printf("Please enter an odd number for n.\n");
//         return;
//     }

//     int mid_point = n / 2;  
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i + j == mid_point || j - i == mid_point || i - j == mid_point || i + j == 3 * mid_point) {
//                 printf("*\t");
//             } else {
//                 printf("\t");
//             }
//         }
//         printf("\n");
//     }
// }
