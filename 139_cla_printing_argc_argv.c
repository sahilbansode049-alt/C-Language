#include <stdio.h>
int main(int argc, char *argv[])
{
    int iCounter;

    printf("\nArgument count is %d", argc); // Argument count is 1

    printf("\nArgument values are:"); // Argument values are:139_cla_printing_argc_argv.exe
    for (iCounter = 0; iCounter < argc; iCounter++)
        puts(argv[iCounter]);

    return 0;
}