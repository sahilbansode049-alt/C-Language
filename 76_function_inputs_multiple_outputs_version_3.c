#include <stdio.h>
void AddSub(int *, int *);
int main(void)
{
    int iNo1, iNo2;

    printf("\nEnter first value:"); // Enter first value:20
    scanf("%d", &iNo1);

    printf("\nEnter secound value:"); // Enter secound value:60
    scanf("%d", &iNo2);

    AddSub(&iNo1, &iNo2);

    printf("\nAddition is %d\nSubstraction is %d", iNo1, iNo2); // Addition is 80,Substraction is -40
}
void AddSub(int *piNo1, int *piNo2)
{
    int iTemp = *piNo1;

    *piNo1 = *piNo1 + *piNo2;

    *piNo2 = iTemp - *piNo2;
}