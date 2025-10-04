// WAP to check a character is vowel or consonant.

#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter a character : ");

    ch = getchar();
    // scanf("%c", ch);

    // if(ch >= 97 && ch <=122) or we can use following
    if(ch >= 'a' && ch <='z' || ch >= 'A' && ch <='Z' )
    {
        switch (ch)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            // case 'a'||'A'||'e'||'E'||'i'||'I'||'o'|| 'O'|| 'u'||'U': this won't work. as OR operator gives boolean output.
                printf("%c is a vowel", ch);
            break;
        
            default:
                printf("%c is a consonant", ch);
            break;
        }
    }
    else
    {
        printf("Character should be alphabet.");
    }
}