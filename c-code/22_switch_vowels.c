#include <stdio.h>
int main(void)
{
    char chChar;

    printf("\nenter the character:"); // enter the character:A  //enter the character:b
    scanf("%c", &chChar);

    switch (chChar)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("\nit is small letter vowels");
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\nit is capital letter vowels"); // it is capital letter vowels
        break;
    default:
        printf("\nit is not vowels"); // it is not vowels
    }

    return 0;
}
