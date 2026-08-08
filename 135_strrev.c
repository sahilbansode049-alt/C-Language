#include<stdio.h>
#include<string.h>
int main(void)
{
    char szString[20];

    printf("\nEnter the String:");   //Enter the String:sahil bansode
    gets(szString);

    strrev(szString);

    printf("\nReverse String is:");    //Reverse String is:edosnab lihas
    puts(szString);

    return 0;

}


