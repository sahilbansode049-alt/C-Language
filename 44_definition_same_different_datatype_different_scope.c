int No = 10;
#include <stdio.h>
void Fun();
int main(void)
{
    int No = 20;

    printf("\n%d", No); // 20
    {
        char No = 'A';

        printf("\n%d", No); // 65
    }
    printf("\n%d", No); // 20

    Fun();

    return 0;
}
void Fun(void)
{
    printf("\n%d", No); // 10
}