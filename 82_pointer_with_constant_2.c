#include <stdio.h>
int main(void)
{
    int iNo = 10;
    // printf("\n%i",iNo);    //10

    const int *pPtr = &iNo;
    // printf("\n%d",*(pPtr));  //10

    ++iNo; // allowed,iNo is non-constant.
    // printf("\n%d",iNo);   //11

    //++(*pPtr); //pointing to constant,13:5: error: increment of read-only location '*pPtr'.
    // printf("\n%d",*(pPtr));   //increment of read-only location '*pPtr' ++(*pPtr);

    // printf("Before increment Address is %d",pPtr);   //Before increment Address is 6422296
    ++pPtr; // allowed,pPtr is non-constant.
    // printf("\nAfter increment Address is %i",pPtr);  //After increment Address is 6422300

    printf("\n%i", iNo);   // 11
    printf("\n%d", *pPtr); // 6422300 
    printf("\n%d", iNo);   // 11
    printf("\n%d", *pPtr); //   : 13:5: error: increment of read-only location '*pPtr' ++(*pPtr);
    printf("\n%i", pPtr);  // 6422300 

    return 0;
}
