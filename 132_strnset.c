#include<stdio.h>
#include<string.h>
int main(void)
{
    char szString[20],ch;
    int n;

    printf("\nEnter the string:");
    gets(szString);

    printf("\nEnter the character to be search:");
    scanf("%c",&ch);

    printf("\nEnter the value for n:");
    scanf("%d",&n);

    strnset(szString,ch,n);

    printf("\nstring is:");
    puts(szString);

    return 0;

}//OUTPUT:
/*
C:\Users\Admin\Desktop\om>132_strnset.exe

Enter the string:sahil bansode 

Enter the character to be search:b

Enter the value for n:3

string is:bbbil bansode
C:\Users\Admin\Desktop\om>132_strnset.exe                      

Enter the string:sahil

Enter the character to be search:h

Enter the value for n:3

string is:hhhil
*/