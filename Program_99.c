// Reversing values of an Array

// Ist method - Using a temp array
#include <stdio.h>
void main() 
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int temp[6] = {0,0,0,0,0,0};
    
    for(int a=0; a<6; a++)
    {
        temp[a] = arr[a];
    }

    for(int i=0; i<6;i++)
    {
        arr[i] =  temp[5-i];
    }

    for(int b=0;b<6; b++)
    {
        printf("%d ", arr[b]);
    }
}

//----------------------------------------------------------------------------------------//
//----------------------------------------------------------------------------------------//

// IInd Method - Using a temp variable

// #include <stdio.h>
// void main() 
// {
//     int arr[6] = {10, 20, 30, 40, 50, 60};
//     int temp;
//     for(int x =0; x<6/2;x++)
//     {
//         temp = arr[x];
//         arr[x] = arr[5-x];
//         arr[5-x]=temp;
//     }

//     for(int b=0;b<6; b++)
//     {
//         printf("%d ", arr[b]);
//     }
// }