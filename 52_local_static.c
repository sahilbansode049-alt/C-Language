#include <stdio.h>
void Fun1();
void Fun2();
int main(void)
{
    int iCounter;
    for (iCounter = 0; iCounter < 3; iCounter++)
        Fun1();

    // int iCounter;            // 11:9:error: redeclaration of 'iCounter' with no linkage int iCounter;
    for (iCounter = 0; iCounter < 3; iCounter++)
        Fun2();

    return 0;
}
void Fun1()
{
    int iNo = 10;
    ++iNo;
    printf("%d\n", iNo); // 11,11,11
}
void Fun2()
{
    static int iNo = 10;
    ++iNo;
    printf("\t%d", iNo); // 11      12      13
}


