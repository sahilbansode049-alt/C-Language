#include <stdio.h>
int main(void)
{
    char chChar1 = 'A';
    char chChar2 = 97;
    int iNo1 = 98;
    int iNo2 = 'B';

    char chAns;
    char chChar3 = 33;
    char chChar4 = 35;

    printf("\nchChar 1(A) in charator=%c", chChar1); // chChar(A) in charator=A
    printf("\nchChar 1(A) in charator=%d", chChar1); // chChar(A) in charator=65

    printf("\nchChar2 in charator=%c", chChar2); // chChar in charator=a
    printf("\nchChar2 in charator=%d", chChar2); // chChar in charator=97

    printf("\niNo1 (b) in charator=%c", iNo1); // iNo1 (b) in charator=b
    printf("\niNo(98) in charator=%d", iNo1);  // iNo(98) in charator=98

    printf("\n%d (%c)", chChar3, chChar3); // 33 (!)
    printf("\n%d (%c)", chChar4, chChar4); // 35 (#)

    chAns = chChar3 + chChar4;
    printf("\nAnswer is %c (%d)", chAns, chAns); // Answer is D(68)

    return 0;
}