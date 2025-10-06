// WAP to print numbers that is divisible by 3 and 7 within 1 to 50.
#include<stdio.h>
void main()
{
 int a;
 for(a=1; a<=50; a++)
 {
    if((a%3==0) && (a%7==0))
    {
        printf("%d\n",a);
    }
 }
}