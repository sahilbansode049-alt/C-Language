#include <stdio.h>
void Addition(void);
int main(void)
{
    Addition();

    return 0;
}

void Addition(void)
{
    int iNo1;
    int iNo2;
    int iAns;

    printf("\nenter two number:"); // enter two number:5 5   enter two number:2 1
    scanf("%d%d", &iNo1, &iNo2);

    iAns = iNo1 + iNo2;

    printf("iAns:%d", iAns); // iAns:10  //iAns:3
}