#include <stdio.h>
#include <string.h>
int main(void)
{
    int n;
    char szSource[20];
    char szDestination[20];

    printf("\nEnter source string:"); 
    gets(szSource);

    printf("\nEnter the value for n:");
    scanf("%d",&n);

    printf("\nsourec string is:"); 
    puts(szSource);

    strncpy(szDestination, szSource,n);

    printf("\nDestination string is:"); 
    puts(szDestination);

    return 0;
    
}//OUTPUT:
/*
C:\Users\Admin\Desktop\om>124_strncpy.exe

Enter source string:sahil bansode

Enter the value for n:5

sourec string is:sahil bansode

Destination string is:sahil   a
*/