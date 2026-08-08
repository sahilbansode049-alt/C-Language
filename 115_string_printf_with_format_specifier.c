#include<stdio.h>
int main(void)
{
    char szStr[]="hello";

    char *pszStr="good";

    printf("%s",szStr);

    printf("%s",pszStr);

    printf("%s","night");

    printf("%s%s%s",szStr,pszStr,"night");

    return 0;
}//hellogoodnighthellogoodnight

