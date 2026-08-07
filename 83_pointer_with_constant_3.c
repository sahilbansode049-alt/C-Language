#include <stdio.h>
int main(void)
{
    const int iNo = 10;
    // printf("\n%i",iNo);  //10

    const int *pPtr = &iNo;
    // printf("\n%d",*(pPtr));  //10

    //++iNo; //(iNo is constant) ,c:10:5: error: increment of read-only variable 'iNo' ++iNo;
    // printf("\n%d",iNo);  //c:10:5: error:increment of read-only variable 'iNo' ++iNo;

    //++(*pPtr); //(pointing to constant) ,c:13:5: error: increment of read-only location '*pPtr'
    // printf("\n%d",*(pPtr));  //c:13:5: error: increment of read-only location '*pPtr'

    // printf("\nBefore increment Address is %d",pPtr);  //Before increment Address is 6422296
    ++pPtr; // allowed,pPtr is non-constant.
    // printf("\nAfter increment Address is %i",pPtr);   //After increment Address is 6422300

    printf("\n%i", iNo);   // 10
    printf("\n%d", *pPtr); // 6422300
    printf("\n%d", iNo);   // error: increment of read-only variable 'iNo' +iNo;
    printf("\n%d", *pPtr); // error: increment of read-only location '*pPtr' ++(*pPtr);
    printf("\n%i", pPtr);  // 6422300

    return 0;
}