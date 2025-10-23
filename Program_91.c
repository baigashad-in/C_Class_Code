// WAP to input 10 elements in array and find largest number form all.



/* #include<stdio.h>
void main()
{
    int arr[10], temp;
    printf("Enter 10 elements of an array : ");
    for(int i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    temp = arr[0];
    for(int j = 0; j<=9; j++)
    {
        if(arr[j]>=temp)
        {
            temp = arr[j];
        }
    }
    printf("Largest element in the array is %d.", temp);
} */



//  Using UDF :-

#include<stdio.h>

int Greatest_in_array(int arr[]); // Declaration of the UDF. return value will be an int.

// int[] Greatest_in_array(int arr[]); // Return value will be an array.

void main()
{
    int arr1[10];
    printf("Enter 10 elements of an array : ");
    for(int i=0; i<=9; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int great = Greatest_in_array(arr1); // Calling of the UDF
    printf("Largest element in the array is %d.", great);
}


int Greatest_in_array(int arr[]) // Definition of the UDF
{
    int temp = arr[0];
    for(int j = 0; j<=9; j++)
    {
        if(arr[j]>=temp)
        {
            temp = arr[j];
        }
    }
    return temp;
}