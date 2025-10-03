#include<stdio.h>
void main()
{
    int no_of_days;
    printf("Enter total days of your age : ");
    scanf("%d",&no_of_days);
    int years = no_of_days/365;
    int years_rem = no_of_days%365;
    int months = years_rem/30;
    int months_rem = years_rem%30;
    int weeks = months_rem/7;
    int days = months_rem%7;
    printf("%d years, %d months, %d weeks, %d days", years, months, weeks, days);
}
