// wap to input 10 elements of array and print pair of element for a given sum
#include<stdio.h>
void main()
{
    int arr[10];
    printf("Enter elements of array :");
    for(int i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0; i<=9; i++)
    {
        for(int j=i+1; j<=9; j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        printf("%d ",arr[i]);
    }
}