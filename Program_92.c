// WAP to create an UDF having input an array and integer, and using linear search find the index of first occurrence of that integer in the array :
//--- int FirstIndexof(int arr[],int n);
// WAP to create an UDF having input an array and integer, and using linear search find the index of last occurrence of that integer in the array :
//--- int LastIndexof(int arr[], int n);
// WAP to create an UDF having input an array and integer, and using linear search count the number of occurrence of that integer in the array :
//--- int Occurrence(int arr[], int n); // Count how many time input number has occurred.
// WAP to create an UDF having input an array and integer, and using linear search find whether the integer is present in the array :
//--- int IsContains(int arr[], int n); // returns 0 = not present, returns 1 = present.


// WAP to input 10 elements in array and print if a given number is present in array or not. --- Linear search code

#include<stdio.h>
void main()
{
    int arr[10], temp, j;
    printf("Enter 10 elements of an array : ");
    for(int i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a number with which you want to compare array elements : ");
    scanf("%d", &temp);

    /* for(j = 0; j<=9; j++)
    {
        if(arr[j]==temp)
        {
            printf("%d is present in the array.", temp);
            break;
        }
      
    }
    if(j==10)
    {
        printf("%d is not present in the array.", temp);
    } */

    int flag = 0;
    for(j = 0; j<=9; j++)
    {
        if(arr[j]==temp)
        {
            flag = 1;
            break; // If you want last index of occurrence of temp then don't use break statement.
        }
    }
    if(flag==0)
    {
        printf("%d is not present in the array.", temp);
    }
    else
    {
        printf("%d is present in the array.", temp);
    }

}