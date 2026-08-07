#include <stdio.h>
int main(void)
{
    int iNo = 10;
    // printf("\n%i",iNo);    //10

    int const *const pPtr = &iNo;
    // printf("\n%d",*(pPtr));   //10

    ++iNo; // allowed,iNo is non-constant.
    // printf("\n%d",iNo);   //11

    //++(*pPtr);   //error,pointing to constant.
    // printf("\n%d",*(pPtr));  //13:5: error: increment of read-only location '*pPtr'++(*pPtr);

    // printf("\nBefore increment Address is %d",pPtr);  //17:5: error: increment of read-only variable 'pPtr'++pPtr;
    //++pPtr;   //error,pPtr is constant.
    // printf("\nAfter increment Address is %d",pPtr);   //17:5: error: increment of read-only variable 'pPtr'++pPtr;

    printf("\n%i", iNo);     // 11,resion is ++iNo.
    printf("\n%d", *(pPtr)); // 11,resion is ++iNo.
    printf("\n%d", iNo);     // 11,resion is ++iNo.
    // printf("\n%d",*(pPtr));    //13:5: error: increment of read-only location '*pPtr'++(*pPtr);
    // printf("\n%i",pPtr);    //17:5: error: increment of read-only variable 'pPtr'++pPtr;

    return 0;
}