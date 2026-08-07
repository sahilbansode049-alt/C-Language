#include <stdio.h>
int Addition(int, int);
int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;

    printf("\nenter two numbers:"); // enter two numbers:5 5
    scanf("%d%d", &iNo1, &iNo2);

    iAns = Addition(iNo1, iNo2);

    printf("\niAns=%d", iAns); // iAns=10

    return 0;
}

int Addition(int iNo1, int iNo2)
{
    int iAns;

    iAns = iNo1 + iNo2;

    return iAns;
}