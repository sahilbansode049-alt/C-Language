#include <stdio.h>
int Addsub(int, int, int *);
int main(void)
{
    int iNo1;
    int iNo2;
    int iSum;
    int iDiff;

    printf("\nEnter first value:"); // Enter first value:4
    scanf("%d", &iNo1);

    printf("\nEnter secound value:"); // Enter secound value:6
    scanf("%d", &iNo2);

    iSum = Addsub(iNo1, iNo2, &iDiff);

    printf("\nAddition is %d\nSubstraction is %d", iSum, iDiff); // Addition is 10 ,Substraction is -2

    return 0;
}
int Addsub(int iA, int iB, int *pDiff)
{
    *pDiff = iA - iB;
    return iA + iB;
}