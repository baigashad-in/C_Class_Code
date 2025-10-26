// int FirstIndexOf(int arr[],int n);
#include<stdio.h>
int FirstIndexOf(int arr[],int n);
void main()
{
    int arr[5];
    printf("Enter a elements of array :");
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    int index = FirstIndexOf(arr,x);
    // printf("Index of number %d",index);
}
int FirstIndexOf(int arr[],int n)
{
    int flag=0;
    for(int i=1; i<=5; i++)
    {
        if(arr[i]==n)
        {
            // printf("elements present in array = %d\n", i);
            flag=1;
            printf("Index of the number is %d", i);
            break;
        }
    }
    if(flag==0)
    {
        printf("elements not present in array\n");
    }
}