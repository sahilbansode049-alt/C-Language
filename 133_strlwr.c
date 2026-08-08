#include<stdio.h>
#include<string.h>
int main(void)
{
    char szStr[20];

    printf("\nEnter the String:");   //Enter the String:TRAMBAKESHVAR
    gets(szStr);

    strlwr(szStr);

    printf("\nString in lower case:");    //String in lower case:trambakeshvar
    puts(szStr);

    return 0;

}