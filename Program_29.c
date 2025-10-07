// WAP to print 0 1 3 6 10 15 21 28...

#include<stdio.h>
void main()
{
    // int m;
    // printf("Enter numbers of terms : ");
    // scanf("%d", &m);
    // int n;
    // for(n=0; n >= m; n++);
    // {
    //     for(int a = 0; a<=28; a = a+n)
    //     {
    //         printf("%d ", a);
    //     }
    // }

    // OR ??? this ???
    int n = 0;
    for(int a = 0; a<=28; a = a+n)
    {
        printf("%d ", a);
        n = n+1;
    }
}