#include<stdio.h>
int main(void)
{
    char chChar1;
    char chChar2;
    char chTemp;

    printf("\nEnter character 1:\t");
    scanf("%c",&chChar1);

    printf("\nEnter character 2:\t");
    scanf("%c%c",&chTemp,&chChar2);

    printf("\ncharacter 1 is %c\n",chChar1);
    printf("character 2 is %c\n",chChar2);

    return 0;
}//OUTPUT:
/*

Enter character 1:      sahil

Enter character 2:
character 1 is s
character 2 is h

*/
