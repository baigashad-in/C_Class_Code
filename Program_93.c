// String

#include<stdio.h>
void main()
{
    char name[50];
    printf("Enter You name : ");
    // scanf("%s", &name); //unlike in int type array, no need of for loop for input.
    gets(name);// user input function for string which contains space between words.
    // printf("Hello %s", name);
    for(int i = 0; i<=49; i++) // returns garbage value also
    // for(int i = 0; name[i] != '\0'; i++) // Stops printing/getting null value... doesn't require running loop from 0 to 49.
    {
        printf("%c ", name[i]);
        if(name[i] == '\0')// Stops printing/getting null value when running for loop from 0 to 49
        {
            break;
        }
    }
}