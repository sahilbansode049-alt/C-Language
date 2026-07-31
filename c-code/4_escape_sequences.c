#include <stdio.h>
int main(void)
{
    printf("hello\n"); // hello
    printf("" hello\n ""); // error: ld returned 1 exit status

    printf("\"hello\"\n"); //"hello"

    printf("'hello'\n"); //'hello'
    printf("\'hello\'"); //'hello'

    printf("hello?\n");  // hello?
    printf("hello\?\n"); // hello?

    // printf("\temp\bin\new\n");
    /*
            empin
    ew
    */
    printf("\temp\\bin\\new\n"); // emp\bin\new
    printf("hello\a");           // hello

    printf("hello\f\n"); // hello♀

    printf("hello\r\n"); // hello

    printf("\thello\n"); //        hello

    printf("hello\v\n"); // hello♂

    printf("hellow\0\n"); // hellow

    return 0;
}
