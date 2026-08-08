#include<stdio.h>
#include<string.h>
int main(void)
{
    char szStr[20];

    printf("\nEnter the String:");   //Enter the String:someshwar
    gets(szStr);

    strupr(szStr);

    printf("\nString in upper case:");    //String in upper case:SOMESHWAR
    puts(szStr);

    return 0;

}