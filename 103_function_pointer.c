#include <stdio.h>
int Addition(int , int );
int Multiplication(int , int );
int main(void)
{
    int iAns;

    int (*pPtr)(int, int); // int (*pPtr)(int,int)=&Addition or Addition;

    pPtr = Addition;

    iAns = pPtr(10, 20);              // or iAns=Addition(10,20);
    printf("\nAddition is=%d", iAns); // Addition is=30

    pPtr = Multiplication;

    iAns = pPtr(10, 20);
    printf("\nMultiplication is %d", iAns); // Multiplication is 200

    return 0;
}
int Addition(int iA, int iB)
{
    return iA + iB;
}
int Multiplication(int iA, int iB)
{
    return iA * iB;
}
