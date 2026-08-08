#include <stdio.h>
#include <string.h>
int main(void)
{
    char *pszPtr = "Hello";
    char szStr[] = "Good";

    printf("\nThe length of hello is %d", strlen(pszPtr));      // The length of hello is 5
    printf("\nThe length of Good is %d", strlen(szStr));        // The length of Good is 4
    printf("\nthe lenght of Morning is %d", strlen("Morning")); // the lenght of Morning is 7
    printf("\nthe lenght of SAHIL is %d", strlen("SAHIL"));     // the lenght of SAHIL is 5

    return 0;
}