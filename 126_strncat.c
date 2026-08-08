#include<stdio.h>
#include<string.h>
int main(void)
{
    
    char szSource[20],szDestination[40];
    int n;

    printf("\nEnter Destination string:");  
    gets(szDestination);

    printf("\nEnter Source string:");
    gets(szSource);
    
    printf("\nEnter the value for n:");
    scanf("%d",&n);

    strncat(szDestination,szSource,n);

    printf("\nConcanated string is :");  
    puts(szDestination);

    return 0;

}//OUTPUT:
/*

Enter Destination string:sahil

Enter Source string:bansode

Enter the value for n:5

Concanated string is :sahilbanso

*/