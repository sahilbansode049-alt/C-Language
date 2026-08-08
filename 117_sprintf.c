#include<stdio.h>
int main(void)
{
    char szStr[]="hello";
    char *pszStr="good";
    char szTemp[50];

    sprintf(szTemp,"%s%s%s",szStr,pszStr,"night");

    printf(szTemp);  //hellogoodnight

    return 0;
    
}