// WAP to build a pyramid having with user input n.

/*
        *
       ***       
      *****
     *******
    *********
   ***********
  *************
 ***************
*****************

*/

#include<stdio.h>
void main()

{
    int n;
    printf("Enter an number : ");
    scanf("%d",&n);
    for(int i = 1; i<=(2*n-1); i++)
    {
        for(int j=1; j<=(2*n-1); j++)
        {
            if(j<=i && j >= (2*n-1+1-i))
            {
                printf("%c",'*');
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
