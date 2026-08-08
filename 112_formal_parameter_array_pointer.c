#include<stdio.h>
#include<string.h>
void Fun1(char szStr[]);
void Fun2(char *pszStr);
int main(void)
{
    Fun1("hello");
    Fun2("Hello");
    return 0;
}
void Fun1(char szStr[])
{
    printf("\n%d",sizeof(szStr));  //4,on 64-bit processor out is 8.

    szStr="bye";
    printf("\n%s",szStr);  //bye

    szStr[2]='Z';
    printf("\n%d",szStr[2]);  //not output,it means program is crashed.

}
void Fun2(char *pszStr)
{
    printf("\n%d",sizeof(pszStr));  //4,on vs code output is 4 but actual output is 8(pointer).
    
    pszStr="bye";
    printf("\n%s",pszStr);  //bye
    
    pszStr[2]='Z';
    printf("\n%c",pszStr[2]);  //not output,it means program is crash

}


