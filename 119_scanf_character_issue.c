#include<stdio.h>
int main(void)
{
    char chChar1;
    char chChar2;

    printf("\nEnter character 1:\t");
    scanf("%c",&chChar1);

    printf("\nEnter character 2:\t");
    scanf("%c",&chChar2);

    printf("character 1 is %c\n",chChar1);
    printf("character 2 is %c\n",chChar2);

    return 0;
}//the output not giving correct output not supporting in windows
/*

C:\Users\Admin\Desktop\om>.\a.exe

Enter character 1:      a

Enter character 2:      character 1 is a
character 2 is


*/