#include <stdio.h>
void Addition(int, int);
int main(void)
{
    int iNo1;
    int iNo2;

    printf("\nenter two number:"); // enter two number:2 2  //enter two number:4 2
    scanf("%d%d", &iNo1, &iNo2);

    Addition(iNo1, iNo2);    //iNo1,iNo2 are Argument

    return 0;
}
void Addition(int iNo1, int iNo2)
{
    int iAns;

    iAns = iNo1 + iNo2;

    printf("\niAns:%d", iAns); // iAns:4  //iAns:6
}