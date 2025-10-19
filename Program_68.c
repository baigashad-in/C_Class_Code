/* // 1. WAP to cerate UDF having no return type without parameters.

#include<stdio.h>

void Greater()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d", a,b);
    if(a>b)
    {
        printf("%d is the greater number.",a);
    }
    else if(b>a)
    {
        printf("%d is the greater number.",b);
    }
    else
    {
        printf("Both are equal numbers.");
    }
}

void main()
{
    int res;
    printf("Do you want to find a greater number among two numbers : enter 1 for yes, 2 for no :");
    scanf("%d",&res);
    if(res==1)
    {
        Greater();
    }
    else
    {
        printf("Thank you.");
    }
}
 */



/* // 2. WAP to create UDF having no return type with parameters.

#include<stdio.h>

void Greater(int a, int b)
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d", a,b);
    if(a>b)
    {
        printf("%d is the greater number.",a);
    }
    else if(b>a)
    {
        printf("%d is the greater number.",b);
    }
    else
    {
        printf("Both are equal numbers.");
    }
}

void main()
{
    int res;
    printf("Do you want to find a greater number among two numbers : enter 1 for yes, 2 for no :");
    scanf("%d",&res);
    if(res==1)
    {
        Greater();
    }
    else
    {
        printf("Thank you.");
    }
} 
*/




// 3. WAP to create UDF having return type without parameters.



/* // 4. WAP to create UDF having return type with parameters.

#include<stdio.h>

int Greater(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else if(y>x)
    {
        return y;
    }
    else
    {
        printf("Both are equal numbers.");
    }
}

void main()
{
    int i,j;
    printf("Enter two numbers : ");
    scanf("%d%d",&i,&j);
    int result = Greater(i,j);
    // int result = Greater(i/34,j-63);
    // int result = Greater(40,12);
    // int result = Greater(56*23,78*14);

    printf("%d is the greater number.", result);
}
 */