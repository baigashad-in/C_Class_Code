// WAP to count number of distinct elements in an array.

#include<stdio.h>
#include<string.h>
void main()
{
    int arr[10] = {1,2,2,3,4,2,3,5,6,5};
    int brr[10];
    memcpy(arr, brr, 10);

    for(int i=0; i<=9; i++)
    {
        int counter=0;
        for(int j=0; j<=9; j++)
        {
            if(arr[i] == brr[j])
            {
                counter++;
            }
        }
        if(counter>1)
        {
            printf("%d occurs in array %d times\n", arr[i],counter);
        }
    }
}