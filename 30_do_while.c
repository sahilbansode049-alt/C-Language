#include <stdio.h>
int main(void)
{
    int iCounter;
    iCounter = 0;

    do
    {
        printf("%d\n", iCounter); // 0 1 2
        iCounter++;
    } while (iCounter < 3);

    iCounter = 3;
    do
    {
        printf("%d", iCounter); // 3,becouse do-while is exit controle loop
        iCounter++;
    } while (iCounter < 3);

    return 0;
}