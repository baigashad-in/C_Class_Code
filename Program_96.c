// WAP to input 10 elements of array and print all indexes of a given divisible by 3 and 5
#include<stdio.h>
void main()
{
    int arr[10];
    printf("Enter elements of array :");
    for(int i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0; i<=9; i++)
    {
        if(arr[i]%3==0 && arr[i]%5==0)
        {
            printf("%d is divisible by 3 and 5 having index %d\n",arr[i],i);
            count++;
        }
    }
}
