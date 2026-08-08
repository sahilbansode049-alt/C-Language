#include<stdio.h>
#include<string.h>
int main(void)
{
    char szString1[10],szString2[10],*pszPtr;

    printf("\nEnter the string1:");
    gets(szString1);

    printf("\nEnter the string to be found:");
    gets(szString2);

    pszPtr=strstr(szString1,szString2);
    if(pszPtr==NULL)
    {
        printf("\nstring is not fouund");
    }
    else
    {
        printf("\nstring is found at %d location",(pszPtr-szString1)+1);
        printf("\nstring found in %s",pszPtr);
    }

    return 0;

}//OUTPUT:
/*
C:\Users\Admin\Desktop\om>138_strstr.exe                     

Enter the string1:sahil 

Enter the string to be found:h

string is found at 3 location
string found in hil

C:\Users\Admin\Desktop\om>138_strstr.exe                     

Enter the string1:sahil

Enter the string to be found:l

string is found at 5 location
string found in l

C:\Users\Admin\Desktop\om>138_strstr.exe                     

Enter the string1:jniu

Enter the string to be found:s

string is not fouund
*/