// Nested Loops

#include<stdio.h>
void main()
{
 for(int i = 0; i<=5; i++)   // Outer loop iterates for 6 times
 {
    //Statement(s); // These statements iterates for total 6 times

    for(int j=1; j<=10; j++) // Inner loop iterates for 10 times for each and every iteration of outer loop.
    {
        //    printf("%d\t",i);  //Statement(s); // These statements iterates for total 60 times
        //    printf("%d\t",j);
        printf("%d\t",i+j);
        // printf("%d\t",(i+1)*j);
    }
    printf("\n");
    //Statement(s); // These statements iterates for total 6 times
 }
}