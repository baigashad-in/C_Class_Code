// WAP to print a pyramid of '*' for input n where n is odd number.

/*

    *
   * *
  * * *
 * * * * 
* * * * *
 * * * * 
  * * *
   * *
    * 
*/

// #include<stdio.h>
// void main()
// {
//     int i,j, space;
//     for(i=1; i<=9; i++)
//     {
//         for(space = 1; space<=9-i; space++)
//         {
//             printf(" ");
//         }
//         for(j=1; j<=i; j++)
//         {
//             printf("%c ",'*');
//         }
//         printf("\n");
//     }
// }


#include<stdio.h>
void main()
{
    int i,j, sp, space, element, input_num;
    printf("Enter a number : ");
    scanf("%d", &input_num);
    for(i=1; i<=input_num; i++)
    {
        if(i<=(input_num/2) +1)
        {
            space = ((input_num/2) +1)-i;
            element = i;
        }
        else
        {
            space = i-((input_num/2)+1);
            element = (input_num+1)-i;
        }
        for(sp = 1; sp<=space; sp++)
        {
            printf(" ");
        }
        for(j=1; j<=element; j++)
        {
            printf("%c ",'*');
        }
        printf("\n");
    }
}