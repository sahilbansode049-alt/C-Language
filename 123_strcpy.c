#include <stdio.h>
#include <string.h>
int main(void)
{
    char szSource[20];
    char szDestination[20];

    printf("\nEnter source string:");
    gets(szSource);

    printf("\nsource string is:"); 
    puts(szSource);

    strcpy(szDestination, szSource);

    printf("\nDestination string is:"); 
    puts(szDestination);

    return 0;
}//OUTPUT:
/*

Enter source string:sahil bansode

source string is:sahil bansode

Destination string is:sahil bansode

*/