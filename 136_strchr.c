#include<stdio.h>
#include<string.h>
int main(void)
{
    char szStr[20],ch;
    char *pszPtr;

    printf("\nEnter the string:");
    gets(szStr);
    printf("\nEnter the character to be found:");
    scanf("%d",&ch);

    pszPtr=strchr(szStr,ch);

    if(pszPtr==NULL)
    printf("\ncharacter is not found.");
    else
    printf("\ncharacter is found.",(pszPtr-szStr)+1);

    return 0;
}//OUTPUT:
/*
C:\Users\Admin\Desktop\om>136_strchr.exe

Enter the string:sahil bansode

Enter the character to be found:n

character is found.


*/