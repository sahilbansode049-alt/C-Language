#include<stdio.h>
#include<string.h>
int main(void)
{
    char szSource[20],szDestination[40];

    printf("\nEnter Destination string:");  
    gets(szDestination);

    printf("\nEnter Source string:");   
    gets(szSource);

    strcat(szDestination,szSource);

    printf("\nConcanated string is :"); 
    puts(szDestination);

    return 0;
}//OUTPUT:
/*

Enter Destination string:omkar

Enter Source string:bansode

Concanated string is :omkarbansode

*/

