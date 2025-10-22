// WAP to create a UDF to check a number is a palindrome number or not.
// --- int IsPalindrome(int num)

#include<stdio.h>
int IsPalindrome(int num)
{
    int sum = 0, digit;
    int temp = num;
    for(temp=num ; temp > 0; temp = temp/10)
    {
        digit = temp%10;
        sum = sum*10 + digit;
    }

    if(num == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void main()
{
    int res, i;
    printf("Enter a number : ");
    scanf("%d",&i);
    res = IsPalindrome(i);
    if(res == 1)
    {
        printf("%d is a palindrome number.\n", i);
    }
    else
    {
        printf("%d is not a palindrome number.\n", i);
    }
}