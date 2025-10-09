// WAP to check a given a number is a palindrome number or not.
// WAP to check a given a number is a armstrong number or not.
// WAP to print square of all digits of a number
// WAP to print sum of digits of a number
// WAP to count number of digits in a number
// WAP to print reverse number of a given number
// WAP to input a number and print cube of all digits.
// WAP to input a number and print sum of all  even digits and sum of all odd digits.
//  WAP to input a number and print sum of cube of all digits.
// WAP to input a number and print number of digits in a number.
// Count -----
// WAP to input a number and count how many are even digits and how many are odd numbers are present.
// WAP to input 5 numbers and check how many even and odd numbers are inputted.
// WAP to input 10 numbers form the user and check how many positive, negative and zeros are inputted.
// WAP to input a number and count how many factors are persent.
// WAP to count how many numbers ends with 2 within 1 to 100
// WAP to count how many numbers are divisible by 3 and 7 within 1 to n.
// WAP to input a number it is prime or not.
// WAP to calculate n^m without using predefined function.
// flat variables -- on off are used.



#include<stdio.h>
void main()
{
 int num;
 printf("Enter a number : ");
 scanf("%d", &num);
 int sum1 = 0, sum2=0, sum3=0;
 for( ; num > 0; num = num/10)
 {
    // printf("%d ", num%10); // to get each digits after each iteration of for-loop.
    sum1 = sum1 + num%10; // to get sum of each digits after each iteration of for-loop.
    sum2 = sum2 + num%10*num%10; // to get sum of square of each digits after each iteration of for-loop.
    sum3 = num%10 + sum3*10; // to reverse the order of digits of a number.

 }   


}