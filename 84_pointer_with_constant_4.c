#include <stdio.h>
int main(void)
{
    const int iNo = 10;
    //printf("\n%i", iNo);

    int *pPtr = &iNo; // 7:15: warning: initialization discards 'const' qualifier from pointer target type int *pPtr=&iNo;
    //printf("\n%d", *(pPtr));

    //++iNo; //(iNo is constant),//10:5: error: increment of read-only variable 'iNo'++iNo;
    //printf("\n%d",iNo);   //10:5: error: increment of read-only variable 'iNo'++iNo;

    ++(*pPtr); // allowed,!!!pointing to non-constant
    // printf("\n%d",*(pPtr));

    //printf("\nBefore increment Address is %d", pPtr); // Before increment Address is 6422296
    ++pPtr;  //allow,pPtr is non-constsnt.                                     
    //printf("\nAfter increment Address is %d", pPtr);  // After increment Address is 6422300

    printf("\n%i",iNo);  //11
    printf("\n%d",*(pPtr));  //6422300
    printf("\n%d",iNo);  //11
    printf("\n%d",*(pPtr));  //6422300
    printf("\n%i",pPtr);  //6422300

    return 0;
}