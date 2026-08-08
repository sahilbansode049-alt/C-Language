#include <stdio.h>
#include <string.h>
int main(void)
{
    char szString1[20], szString2[25];
    int ch,n;

    printf("\nEnter String1 :"); 
    gets(szString1);

    printf("\nEnter String2 :"); 
    gets(szString2);

    printf("\nEnter n:");
    scanf("%d",&n);

    ch = strncmpi(szString1, szString2,n);

    if (ch == 0)
        printf("\nboth String are equal."); 
    else
        printf("\nboth string are different."); 
    getch();

    return 0;
}//OUTPUT:
/*
Enter String1: sahil
Enter String2: sahil
Enter n: 5

both String are equal.

C:\Users\Admin\Desktop\om>130_strncmpi.exe
Enter String1: Hello
Enter String2: sahil
Enter n: 3

both string are different.
*/