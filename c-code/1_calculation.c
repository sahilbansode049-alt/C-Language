#include <stdio.h>
int modulus(int, int);
int multiplication(void);
void subtraction(int, int);
void division(void);
int addition(int, int);
int main(void)
{
    int iNo1;
    int iNo2;
    int iNo3;
    int iAns;

    printf("\nenter two number:"); // enter two number:12 12
    scanf("%d%d", &iNo1, &iNo2);
    iAns = addition(iNo1, iNo2);
    printf("\nAddition is %d", iAns);

    subtraction(iNo1, iNo2);

    printf("\nmultiplication id %d", multiplication()); // multiplication is 24

    division();

    printf("\nenter the numeratoe & denominator:"); // enter the numeratoe & denominator:5 2
    scanf("%d%d", &iNo1, &iNo2);
    iAns = modulus(iNo1, iNo2);
    printf("\nreminder is %d", iAns); // reminder is 1

    return 0;
}

int modulus(int num, int den)
{
    int reminder;
    reminder = num % den;
    return reminder;
}

int multiplication(void)
{
    int iNo1, iNo2;
    printf("\nenter the two number:"); // enter the two number:12 2
    scanf("%d%d", &iNo1, &iNo2);

    return iNo1 * iNo2;
}

void subtraction(int iNo1, int iNo2)
{
    int iAns;
    iAns = iNo1 - iNo2;
    printf("\nsubstraction is :%d-%d=%d", iNo1, iNo2, iAns); // substraction is :12-12=0
}

void division()
{
    int numerator;
    int denominator;

    printf("\nenter numerator:"); // enter numerator:4
    scanf("%d", &numerator);
    printf("\nenter denominetor:"); // enter denominator:2
    scanf("%d", &denominator);

    printf("\nquatient is %d", numerator / denominator); // quatient is 2
}

int addition(int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}
