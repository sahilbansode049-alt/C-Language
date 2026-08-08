#include <stdio.h>
int main(int argc, char *argv[])
{
    int iAns;
    int iCounter;

    if (argc != 3)
    {
        printf("\nInvalid argument");

        return 0;
    }

    iAns = atoi(argv[1]) + atoi(argv[2]);
    printf("\nAddition is %d", iAns);

    return 0;
}//OUTPUT:
/*
C:\Users\Admin\Desktop\om>140_cla_addition_two_integers.exe                           

Invalid argument
*/