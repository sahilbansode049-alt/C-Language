#include <stdio.h>
int main(void)
{
    char szStr[] = "hello";

    char *pszStr = "good";

    puts(szStr);
    puts(pszStr);
    puts("night");

    return 0;
}/* output like:
hello
good
night

*/