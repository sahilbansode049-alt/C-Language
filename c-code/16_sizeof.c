#include <stdio.h>
int main(void)
{
    char chChar = 'A';
    int iNo = 10;
    float fNo = 57.33f;
    double dNo = 69.33;

    printf("\n%d", sizeof(char));   // 1
    printf("\n%d", sizeof(int));    // 4
    printf("\n%d", sizeof(float));  // 4
    printf("\n%d", sizeof(double)); // 8

    printf("\n%d", sizeof(chChar)); // 1
    printf("\n%d", sizeof(iNo));    // 4
    printf("\n%d", sizeof(fNo));    // 4
    printf("\n%d", sizeof(dNo));    // 8

    printf("\n%d", sizeof('B'));    // 4
    printf("\n%d", sizeof(20));     // 4
    printf("\n%d", sizeof(99.99));  // 8!!
    printf("\n%d", sizeof(99.99f)); // 4!!

    printf("\n%d", sizeof 'B');   // 4 !!
    printf("\n%d", sizeof 20);    // 4
    printf("\n%d", sizeof 99.99); // 8
    printf("\n%d",sizeof int);    //error: expected expression before 'int'

    printf("\n%d", sizeof iNo);    // 4
    printf("\n%d", sizeof(++iNo)); // 4
    printf("\n%d", iNo);           // 10 !!

    printf("\n%d", sizeof(void)); // 1

    return 0;
}