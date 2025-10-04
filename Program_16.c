#include<stdio.h>
void main()
{
    int month;
    printf("Enter the month number : ");
    scanf("%d", &month);
    // if(month==1)
    // {
    //     printf("January");
    // }
    // else if(month==2)
    // {
    //     printf("February");
    // }
    // else if(month==3)
    // {
    //     printf("March");
    // }
    // else if(month==4)
    // {
    //     printf("April");
    // }
    switch (month)
    {
        case 1:
        printf("January");
        break;

        case 2:
        printf("February");
        break;

        case 3:
        printf("March");
        break;

        case 4:
        printf("April");
        break;
    
        default:
        printf("Kindly enter a valid month number");
        break;
    }
}