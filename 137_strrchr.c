#include <stdio.h>
#include <string.h>
int main(void)
{
    char szStr[20], ch;
    char *pszPtr;

    printf("\nEnter the string:");
    gets(szStr);
    printf("\nEnter the character to be found:");
    scanf("%d", &ch);

    pszPtr = strrchr(szStr, ch);

    if (pszPtr == NULL)
        printf("\ncharacter is not found.");
    else
        printf("\ncharacter is found.", (pszPtr - szStr) + 1);

    return 0;
}//OUTPUT:
/*
C:\Users\Admin\Desktop\om>137_strrchr.exe

Enter the string:somkar patil

Enter the character to be found:p

character is found.

*/