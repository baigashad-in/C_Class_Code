// WAP to create a pyramid.
// this code doesn't work properly.

#include<stdio.h>
void main()
{
 for(int i = 1; i<=5; i++)   // Outer loop iterates for 6 times
 {
    for(int j=1; j<=i; j++)
    {
        {
            printf("%*s",5-i,"");
            // printf(" ");
            printf("%c", '*');
        }
    }
    printf("\n");
 }
}