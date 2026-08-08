#include <stdio.h>
#include <string.h>
int main(void)
{
    char szStr[] = "hello,Good,Night;How,are,you?";
    char *pszStr = NULL;

    puts(szStr);
    pszStr = strtok(szStr, ",;");
    while (pszStr != NULL)
    {
        puts(pszStr);
        pszStr = strtok(NULL, ",;");
    }

    return 0;

} // output
/*
hello,Good,Night;How,are,you?
hello
Good
Night
How
are
you?
*/
