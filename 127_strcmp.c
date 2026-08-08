#include <stdio.h>
#include <string.h>
int main(void)
{
    char szString1[20], szString2[25];
    int ch;

    printf("\nEnter String1 :"); 
    gets(szString1);

    printf("\nEnter String2 :"); 
    gets(szString2);

    ch = strcmp(szString1, szString2);

    if (ch == 0)
        printf("\nboth String are equal."); 
    else
        printf("\nboth string are different."); 

    return 0;
}//OUTPUT:
/*

Enter String1 :sahil

Enter String2 :sahil

both String are equal.
C:\Users\Admin\Desktop\om>127_strcmp.exe

Enter String1 :sahil

Enter String2 :sahill

both string are different.
*/