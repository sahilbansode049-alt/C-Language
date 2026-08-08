#include<stdio.h>
int main(int argc,char *argv[])
{
    int iAns=0;
    int iCounter;

    for(iCounter=0;iCounter<argc;iCounter++)
    iAns=iAns+atoi(argv[iCounter]);

    printf("\nAddition is %d",iAns);    //Addition is 141

    return 0;
}