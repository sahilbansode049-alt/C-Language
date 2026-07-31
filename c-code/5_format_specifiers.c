#include <stdio.h>
int main(void)
{
    int x = 10;

    printf("%d\n", -1); //-1
    printf("%u\n", -1); // 4294967295

    printf("%d\n", 26); // 26
    printf("%u\n", 26); // 26
    printf("%o\n", 26); // 32
    printf("%x\n", 26); // 1a
    printf("%X\n", 26); // 1A
    printf("%x\n", 18); // 12
    printf("%X\n", 18); // 12

    printf("%d\n", 32);   // 32
    printf("%d\n", 032);  // 26
    printf("%d\n", 0x32); // 50
    printf("%d\n", 0x12); // 18
    printf("%d\n", 0x1a); // 26

    printf("%i\n", 25); // 25
    printf("%c\n", 12); // ♀

    printf("%ld\n", 123456789); // to print long int number 123456789
    printf("%ld\n", 024);       // 20
    printf("%ld\n", 0x24);      // 36

    printf("%hd\n", 145);   // to print short int number 145
    printf("%hd\n", 0145);  // 101
    printf("%hd\n", 0x145); // 325

    printf("%f\n", 3.141);   // 3.141000
    printf("%f\n", 03.141);  // 3.141000
    //printf("%f\n", 0x3.141); // error: hexadecimal floating constants require an exponent
    printf("%f\n", 0x3);     // 3.140999

    printf("%e\n", 3.15); // it print floating point number like 3.150000e+000

    printf("%E\n", 3.14); // it also print floating point number like%e 3.140000E+000

    printf("%g\n", 3.25); // 3.25

    printf("%G", 3.25); // 3.25

    printf("%lf", 1.12345678912345); // to stored double pecision floating value 1.123457

    printf("%s\n", "hello bro"); // string is use to stored char hello bro

    printf("%p", &x); // it is used to stored the addr of another var 0061FF1C this is addr of x

    return 0;
}
