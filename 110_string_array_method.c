#include<stdio.h>
#include<string.h>
int main(void)
{
    char szStr[]={'h','e','l','l','o','\0'};

    printf("\n%d",sizeof(szStr));  //6

    printf("\n%d",strlen(szStr));  //5

    //szStr="bye";  //szStr is array and it don't have l-value,11:10: error: assignment to expression with array type szStr="bye";

    szStr[2]='Z';  //allow
    printf("\n%c",szStr[2]);  //Z

    return 0;
}