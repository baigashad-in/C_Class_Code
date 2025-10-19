// WAP to create a UDF check to check a given number is prime or not.
// --- int IsPrime(int num)
// WAP to create a UDF to print prime numbers within 1 to 1000 using UDF --- int IsPrime(int num).
// WAP to create a UDF to return factorial of a given number.
// --- long Factorial(int num)
// WAP to create a UDF to print factorial of all numbers between 1 to 10 using UDF --- long Factorial(int num)
// WAP to create a UDF to find largest number between 3 numbers.
// --- void GreaterIn3(int a, int b, int c)
// WAP to create a UDF to check a number is a palindrome number or not.
// --- int IsPalindrome(int num)
// WAP to create a UDF to return number of digits in a number
// --- int Length(int num)
// WAP to create a UDF to check a number is a Armstrong number or not.
// --- int IsArmstrong(int num)
// WAP to create a UDF to print all armstrong number between 100 to 900.
// --- int Length(int num)
// --- int IsArmstrong(int num)




// WAP to create a UDF to calculate nCr value(Permutation-n-Combination).

#include<stdio.h>
double Factorial(int num);

void main()
{
    int n, r;
    printf("Enter value of n and r to calculate nCr : ");
    scanf("%d%d",&n, &r);
    double factorial_n = Factorial(n);
    double factorial_r = Factorial(r);
    double factorial_n_r = Factorial(n-r);
    double nCr = (factorial_n/(factorial_r*factorial_n_r));
    printf("nCr = %.0lf\n", nCr);

    double result = Factorial(n)/(Factorial(r)*Factorial(n-r));
    printf("nCr = %.0lf\n", result);

    printf("nCr = %.0lf\n", Factorial(n)/(Factorial(r)*Factorial(n-r)));

// testing : 
// double  factorial_res = Factorial(15);
// printf("%.0lf is the value of factorial of 15",factorial_res );
}

double Factorial(int num)
{
    double multiples = 1;
    for (int i=1; i<=num; i++)
    {
        multiples = multiples*i;
    }
    return multiples;
    // printf("Factorial of %d is %d", num, multiples);

}