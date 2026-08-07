#include <stdio.h>
int main(void)
{
    int iCounter;
    iCounter = 0;
    while (iCounter < 3)
    {
        printf("%d\n", iCounter); // 0 1 2
        iCounter++;
    }

    iCounter = 0;
    while (iCounter < 3)
        printf("\n%d", iCounter++); // 0 1 2

    iCounter = 3;
    while (iCounter < 3)
    {
        printf("\n%d", iCounter); // no output, while is entry controle loop
        iCounter++;
    }
    return 0;
}
