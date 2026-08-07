#include <stdio.h>
void Addsub(int, int, int *, int *);
int main(void)
{
    int iNo1, iNo2;
    int iSum, iDiff;

    printf("\nEnter thy value 1st and 2nd:"); // Enter thy value 1st and 2nd:4,5
    scanf("%d%d", &iNo1, &iNo2);

    Addsub(iNo1, iNo2, &iSum, &iDiff);

    printf("\nAddition is %d and Substraction id %d", iSum, iDiff); // Addition is 9 and Substraction id -1

    return 0;
}
void Addsub(int iA, int iB, int *pSum, int *pDiff)
{
    *pSum = iA + iB;
    *pDiff = iA - iB;
}

