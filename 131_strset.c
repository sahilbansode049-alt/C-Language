#include<stdio.h>
#include<string.h>
int main(void)
{
    char szString[20],ch;

    printf("\nEnter the string:");
    gets(szString);

    printf("\nEnter the character to be search:");
    scanf("%c",&ch);

    strset(szString,ch);

    printf("\nstring is:");
    puts(szString);

    return 0;

}//OUTPUT:
/*
C:\Users\Admin\Desktop\om>131_strset.exe                     

Enter the string:sahil

Enter the character to be search:s

string is:sssss

C:\Users\Admin\Desktop\om>131_strset.exe

Enter the string:omkar bansode

Enter the character to be search:b

string is:bbbbbbbbbbbbb

*/