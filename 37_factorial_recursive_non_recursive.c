#include <stdio.h>
int FactRecursive(int);
int FactNonRecursive(int);
int main(void)
{
    int iAns;
    int iNo;

    printf("\nenter number:"); // enter number:2  //enter number:6
    scanf("%d", &iNo);

    iAns = FactRecursive(iNo);
    printf("\nAnswer is %d", iAns); // Answer is 2   //Answer is 720

    iAns = FactNonRecursive(iNo);
    printf("\nAnswer is %d", iAns); // Answer is 2   //Answer is 720

    return 0;
}

int FactRecursive(int iNo)
{
    if (iNo == 1)
        return 1;
    return iNo * FactRecursive(iNo - 1);
}

int FactNonRecursive(int iNo)
{
    int iCounter;
    int iAns = iNo;

    for (iCounter = iNo - 1; iCounter != 1; iCounter--)
    {
        iAns = iAns * iCounter;
    }
    return iAns;
}