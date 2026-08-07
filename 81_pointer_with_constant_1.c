#include <stdio.h>
int main(void)
{
    int iNo = 10;
    // printf("\n%i",iNo);  //10

    int *pPtr = &iNo;
    // printf("\n%d",*(pPtr));   //10

    ++iNo; // allowed,iNo is non-constant.
    // printf("\n%d",iNo);   //11

    ++(*pPtr); // allowed,pointing to non-constant.
    // printf("\n%d",*(pPtr));   //12

    // printf("%d",pPtr);  //6422296
    ++pPtr; // allowed,pPtr is non-copnstant.
    // printf("\n%i",pPtr);  //6422300

    printf("\n%i", iNo);     // 12
    printf("\n%d", *(pPtr)); // 6422300  
    printf("\n%d", iNo);     // 12
    printf("\n%d", *pPtr);   // 6422300
    printf("\n%i", pPtr);    // 6422300

    return 0;
}


