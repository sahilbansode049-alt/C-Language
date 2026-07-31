#include <stdio.h>
int main(void)
{
    printf("\nsize of (int)=%d", sizeof(int));                     // size of (int)=4
    printf("\nsize of (short int)=%d", sizeof(short int));         // size of (short int)=2
    printf("\nsize of (long int)=%d", sizeof(long int));           // size of (long int)=4
    printf("\nsize of (long long int)=%d", sizeof(long long int)); // size of (long long int)=8

    printf("\nsize of (char)=%d", sizeof(char)); // size of (char)=1
    printf("\nsize of (short char)=%d", sizeof(short char));         // error: both 'short' and 'char' in declaration specifiers
    printf("\nsize of (long char)=%d", sizeof(long char));           // error: both 'long' and 'char' in declaration specifiers
    printf("\nsize of (long long char)=%d", sizeof(long long char)); // error: both 'long' and 'char' in declaration specifiers

    printf("\nsize of (float)=%d", sizeof(float)); // size of (float)=4
    printf("\nsize of (short float)=%d", sizeof(short float));         // error: both 'short' and 'float' in declaration specifiers
    printf("\nsize of (long float)=%d", sizeof(long float));           // error: both 'long' and 'float' in declaration specifiers
    printf("\nsize of (long long float)=%d", sizeof(long long float)); // error: both 'long' and 'float' in declaration specifiers

    printf("\nsize of (double)=%u", sizeof(double)); // size of (double)=8
    printf("\nsize of (short double)=%d", sizeof(short double));          // error: both 'short' and 'double' in declaration specifiers
    printf("\nsize of (long double)=%d", sizeof(long double));            // size of (long double)=12
    printf("\nsize of (long long double))=%d", sizeof(long long double)); // error: both 'long long' and 'double' in declaration specifiers

    printf("\nsize of unsigned int=%lu", sizeof(unsigned int)); // size of unsigned int=4
    printf("\nsize of signed int=%lu", sizeof(signed int));     // size of signed int=4

    printf("\nsize of unsigned char=%lu", sizeof(unsigned char)); // size of unsigned char=1
    printf("\nsize of signed char=%lu", sizeof(signed char));     // size of signed char=1

    printf("\nsize of unsigned float=%lu",sizeof(unsigned float));        //error: both 'unsigned' and 'float' in declaration specifiers
    printf("\nsize of signed float=%lu",sizeof(signed float));         //error: both 'signed' and 'float' in declaration specifiers

    printf("\nsize of unsigned double=%lu",sizeof(unsigned double));          //error: both 'unsigned' and 'double' in declaration specifiers
    printf("\nsize of signed double=%lu",sizeof(signed double));          //error: both 'signed' and 'double' in declaration specifiers

    printf("\nsize of short=%d", sizeof(short));         // size of short=2
    printf("\nsize of long=%d", sizeof(long));           // size of long=4
    printf("\nsize of long long=%d", sizeof(long long)); // size of long long=8
    printf("\nsize of signed=%d", sizeof(signed));       // size of signed=4
    printf("\nsize of unsigned=%d", sizeof(unsigned));   // size of unsigned=4

    return 0;
}