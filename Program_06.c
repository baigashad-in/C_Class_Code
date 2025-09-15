// WAP to calculate age in years months and days

#include<stdio.h>
#include<conio.h>
void main()
// {
//     int no_of_days, years, years_rem, months, days;
//     printf("Enter total days of your age : ");
//     scanf("%d",&no_of_days);
//     years = no_of_days/365;
//     years_rem = no_of_days%365;
//     months = years_rem/30;
//     days = years_rem%30;
//     printf("%d years, %d months, %d days", years, months, days);
//     getch();
// }
{
    int no_of_days;
    printf("Enter total days of your age : ");
    scanf("%d",&no_of_days);
    int years = no_of_days/365;
    int years_rem = no_of_days%365;
    int months = years_rem/30;
    int days = years_rem%30;
    printf("%d years, %d months, %d days", years, months, days);
    getch();
}