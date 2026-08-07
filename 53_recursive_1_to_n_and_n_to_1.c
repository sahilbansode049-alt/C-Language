#include <stdio.h>
void PrintNumber1toN(int);
void PrintNumberNto1(int);
int main(void)
{
    int iNo;

    printf("Enter number:"); //Enter number:5 ,Enter number:8

    scanf("%d", &iNo);

    PrintNumber1toN(iNo);
    PrintNumberNto1(iNo);

    return 0;
}
void PrintNumber1toN(int iNo)
{
    if (iNo == 0)
        return;

    PrintNumber1toN(iNo - 1); //1       2       3       4       5      //1       2       3       4       5       6       7       8
    printf("%d\t", iNo);
}
void PrintNumberNto1(int iNo)
{
    if (iNo == 0)
        return;

    printf("%d", iNo); // 54321 //87654321
    PrintNumberNto1(iNo - 1);
}



