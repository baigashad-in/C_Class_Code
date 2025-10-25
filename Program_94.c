// WAP to sort 10 elements of array in descending order -- Selection sort.

#include<stdio.h>
void main()
{
    int arr[10],  temp=0;
    printf("Enter 10 elements of an array : ");
    for(int i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");

    for(int a=0; a<=9-1; a++) // 9-1 = 8 as if 9 elements of an array is sorted makes ast element automatically sorted.
    {
        for(int b=a+1;b<=9;b++)
        {
            // if(arr[b] > arr[a]) // for sorting in descending order
            if(arr[b] < arr[a]) // for sorting in ascending order
            {
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
        printf("%d\n", arr[a]);
    }
    for(int c=0; c<=9; c++)
    {
        printf("%d ", arr[c]);
    }

    int n;
    printf("Enter an element to search in an Array using Binary Search : ");
    scanf("%d", &n);
    int first_index = 0;
    int end_index = 9;
    int mid = (first_index + end_index)/2;


    while(first_index <= end_index)
    {
        if(n==arr[mid])
        {
            printf("Search Successful.");
            break;
        }
        else if (arr[mid] >n)
        {
            end_index = mid-1; // as we have already compared mid element with input n
            mid = (first_index + end_index)/2;
        }
        else if(arr[mid]<n)
        {
            first_index = mid+1;
            mid = (first_index + end_index)/2;
        }
    }
    
    if(first_index > end_index) // or we can use a flag variable.
    {
        printf("Search not successful");
    }
}


