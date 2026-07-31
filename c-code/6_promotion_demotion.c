#include <stdio.h>
int main(void)
{
    int iAns;

    iAns = 2 * 3.25 + (9 / 2);
    printf("%d", iAns); // 10
    return 0;
}
/*

iAns=((2*3.25)+(9/2));    //promotion of 2 to 2.00
    =(6.50+(9/4));
    =6.50+4;           //promotion of 4 to 4.00
    =10.50;          //demotion of 10.50 to 10
    =10;

*/