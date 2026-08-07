#include <stdio.h>
int Addition(int iNO1, int iNO2);
int Substraction(int iNO1, int iNO2);
int Multiplication(int iNO1, int iNO2);
int Division(int iNO1, int iNO2);
int Modulus(int iNO1, int iNO2);
int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;
    int iChoice;

    while (1)
    {
        printf("\n1.Addition \n2.Substraction\n3.Multiplication\n4.Divison\n5.Modulus\n6.Exits");
        printf("\nenter your choice:"); // enter your choice:1//enter your choice:2 //enter your choice:3 //enter your choice:4 //enter your choice:5
        scanf("%d", &iChoice);

        if (iChoice == 6)
            break;

        if (iChoice <= 0 || iChoice >= 7)
        {
            printf("\nwrong choice");
            continue;
        }

        printf("\nenter two number:"); // enter two number:12,12 //enter two number:12,6 //enter two number:2,2 //enter two number:15,2 //enter two number:12,5
        scanf("%d%d", &iNo1, &iNo2);

        switch (iChoice)
        {
        case 1:
            iAns = Addition(iNo1, iNo2);
            break;

        case 2:
            iAns = Substraction(iNo1, iNo2);
            break;
        case 3:
            iAns = Multiplication(iNo1, iNo2);
            break;

        case 4:
            iAns = Division(iNo1, iNo2);
            break;

        case 5:
            iAns = Modulus(iNo1, iNo2);
            break;
        }
        printf("\nAnswer is %d", iAns);
    }
    // Answer is 24 //Answer is 6 //Answer is 4 //Answer is 7 //Answer is 2
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
