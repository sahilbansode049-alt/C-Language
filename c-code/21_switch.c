#include <stdio.h>
int main(void)
{

    switch (2)
    {
    case 1:
        printf("\none");

    case 2:
        printf("\ntwo"); 

    case 3:
        printf("\nthree");
    }// two,three

    switch (3)
    {
    case 1:
        printf("\none");

    case 2:
        printf("\ntwo");

    case 3:
        printf("\nthree");
    }//three

    switch (5)
    {
    case 1:
        printf("\none");

    case 2:
        printf("\ntwo");

    case 3:
        printf("\nthree");

    default:
        printf("\ndefault");
    }//default

    switch (5)
    {
    case 1:
        printf("\none");

    default:
        printf("\ndefault\t");

    case 2:
        printf("two\t");

    case 3:
        printf("three");
    } // default  two three

    switch (5)
    {
    case 1:
        printf("\none");

    case 2:
        printf("\ntwo");

    case 3:
        printf("\nthree");
    } // no output and also no error

    return 0;
}