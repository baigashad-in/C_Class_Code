#include<stdio.h>
void main()
{
    int num, temp, temp2;
    printf("Enter a number: ");
    scanf("%d",&temp);
    temp2 = 0;
    if (temp <=0)
    {
        temp2 = 1;
        printf("Kindly Enter a positive number.\n");
    }
    else
    {
        for(num = 2; num < temp; num++)
        {
            switch(temp%num)
            {
                case 0:
                    temp2 = 1;
                break;
            }
            if(temp2 == 1)
            {
                break;
            }
        }
        if(temp2 == 1)
            {
                printf("%d is not a prime number.\n",temp);
            }
        else 
            {
                printf("%d is a prime number.\n", temp);
            }
    }
}