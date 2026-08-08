#include<stdio.h>
#include<string.h>
int main(void)
{
    char *pszStr="hello";

    printf("\n%d",sizeof(pszStr));  //4,actual output size is 8 (pointer).

    printf("\n%d",strlen(pszStr));   //5,it not count '\0'.
    
    pszStr="bye";

    printf("\n%s",pszStr);   //bye

    pszStr[2]='Z';

    printf("\n%s",pszStr[2]);  //not output it means program is crashed.

    return 0;

}



