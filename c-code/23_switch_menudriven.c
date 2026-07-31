#include <stdio.h>
int Addition(int iNo1, int iNo2);
int Substraction(int iNo1, int iNo2);
int Multiplication(int iNo1, int iNo2);
int Division(int iNo1, int iNo2);
int Modulus(int iNo1, int iNo2);
int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;
    int iChoice;

    printf("\n1.addition\n2.substraction\n3.multiplication\n4.division\n5.modulus");
    printf("\nenter your choice:"); // enter your choice:1//enter your choice:2 //enter your choice:3 //enter your choice:4 //enter your choice:5
    scanf("%d", &iChoice);

    if (iChoice <= 0 || iChoice >= 6)
    {
        printf("\nwrong choice");
        return -1;
    }

    printf("\nenter two number:"); // enter two number:12 12 //enter two number:12 6 //enter two number:2 2 //enter two number:15 2 //enter two number:12 5
    scanf("%d%d", &iNo1, &iNo2);

    switch (iChoice)
    {
    case 1:
        iAns = Addition(iNo1, iNo2);
        printf("\nAddition is %d", iAns); // Addition is 24
        break;

    case 2:
        iAns = Substraction(iNo1, iNo2);
        printf("\nsubstraction is %d", iAns); // substraction is 6
        break;
    case 3:
        iAns = Multiplication(iNo1, iNo2);
        printf("\nmultiplication is %d", iAns); // multiplication is 4
        break;

    case 4:
        iAns = Division(iNo1, iNo2);
        printf("\ndivision is %d", iAns); // division is 7
        break;

    case 5:
        iAns = Modulus(iNo1, iNo2);
        printf("\nmodulus is %d", iAns); // modulus is 2
        break;
    }
    return 0;
}
int Addition(int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}

int Substraction(int iNo1, int iNo2)
{
    return iNo1 - iNo2;
}

int Multiplication(int iNo1, int iNo2)
{
    return iNo1 * iNo2;
}

int Division(int iNo1, int iNo2)
{
    return iNo1 / iNo2;
}

int Modulus(int iNo1, int iNo2)
{
    return iNo1 % iNo2;
}
