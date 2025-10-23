// WAP to input 10 values and print all values in descending order of index.

// #include<stdio.h>
// void main()
// {
//     int arr[10];
//     printf("Enter 10 elements of an array : ");
//     for(int i=0; i<=9; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("\n");
//     printf("Array values in descending order of index = ");
//     // for(int i=9;i>=0;i--)
//     // {
//     //     printf("%d ", arr[i]);
//     // }
//     for(int i=0;i<=9;i++)
//     {
//         printf("%d ", arr[9-i]);
//     } 
// }


#include<stdio.h>
void main()
{
    int arr[10];
    printf("Enter 10 elements of an array : ");
    for(int i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Array values are = ");
    for(int i=0;i<=9;i++)
    {
        printf("%d ", arr[i]);
    } 
}
