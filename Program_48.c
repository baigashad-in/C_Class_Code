// Break Statement and Continue statement.
// #include<stdio.h>
// void main()
// {
//     for(int i = 1; i<=10; i++)
//     {
//         printf("%d\n",i);
//         if(i>4)
//         {
//             break;
//         }
//         printf("End of iteration number %d", i);
//     }
//     printf("Hello, Loop is now broken.");
// }

// Continue statement
#include<stdio.h>
void main()
{
    for(int i = 1; i<=15; i++)
    {
        printf("%d\n",i);
        if(i!=10)
        {
            continue;;
        }
        printf("End of iteration number %d", i);
    }
    printf("Hello, Loop is now broken.");
}