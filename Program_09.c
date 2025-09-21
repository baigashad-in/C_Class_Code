// WAP to input a alphabet and print it's pair character at same position of reverse order.
#include<stdio.h>
#include<conio.h>
void main()
{
    char alphabet;
    printf("Enter a lowercase alphabet : ");
    // scanf("%c", &alphabet);
    // int op = alphabet - 32;
    // char op = alphabet -32;
    // alphabet = getch();
    // alphabet = getchar();
    alphabet = getche();
    // printf("Uppercase alphabet = %c", op);
    // printf("\nUppercase alphabet = %c", alphabet - 32);

    int alphabet_value = 122 - alphabet;
    int intermediate_value = 25 - alphabet_value;
    int new_value = 122 - intermediate_value;
    printf("\n%c", new_value);

}