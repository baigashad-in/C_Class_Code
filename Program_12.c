#include<stdio.h>
void main()
{
    int money;
    printf("Enter an amount : ");
    scanf("%d", &money);
    int notes2000 = money/2000;
    money = money%2000;
    int notes500 = money/500;
    money = money%500;
    int notes200 = money/200;
    money = money%200;
    int notes100 = money/100;
    money = money%100;
    int notes50 = money/50;
    money = money%50;
    int notes20 = money/20;
    money = money%20;
    int notes10 = money/10;
    money = money%10;
    int notes5 = money/5;
    money = money%5;
    int notes2 = money/2;
    int notes1 = money%2;
    printf("Rs. 2000 notes = %d, \nRs. 500 notes = %d, \nRs. 200 notes = %d, \nRs. 100 notes = %d, \nRs. 50 notes = %d, \nRs. 20 notes = %d, \nRs. 10 notes = %d, \nRs. 5 notes = %d, \nRs. 2 notes = %d, \nRs. 1 notes = %d", notes2000, notes500, notes200, notes100, notes50, notes20, notes10, notes5, notes2, notes1);
    printf("\nTotal Number of notes needed = %d", notes2000 + notes500 + notes200 + notes100 + notes50 + notes20 + notes10 + notes5 + notes2 + notes1); 

}

