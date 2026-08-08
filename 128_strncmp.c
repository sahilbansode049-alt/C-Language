#include <stdio.h>
#include <string.h>
int main(void)
{
    char szString1[20], szString2[25];
    int n,ch;

    printf("\nEnter String1 :");
    gets(szString1);

    printf("\nEnter String2 :"); 
    gets(szString2);

    printf("\nEnter the value for n:");
    scanf("%d",&n);

    ch = strncmp(szString1, szString2,n);

    if (ch == 0)
        printf("\nboth String are equal.");
    else
        printf("\nboth string are different.");

    return 0;
}//OUTPUT:
/*
C:\Users\Admin\Desktop\om>128_strncmp.exe
Enter String1 :sahil

Enter String2 :sahik

Enter the value for n:3

both String are equal.

C:\Users\Admin\Desktop\om>128_strncmp.exe
Enter String1 :sahil

Enter String2 :omkil

Enter the value for n:4

both string are different.

C:\Users\Admin\Desktop\om>128_strncmp.exe

Enter String1 :sahil

Enter String2 :sakhil

Enter the value for n:3

both string are different.
*/