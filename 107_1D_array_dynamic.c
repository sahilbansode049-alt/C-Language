#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main(void)
{
    int iCounter;
    int iNoOfElement;

    int *pPtr=NULL;

    printf("\nHow many Element you want to Enter?(<%d)",MAX);//How many Element you want to Enter?(<10)4
    scanf("%d",&iNoOfElement);

    pPtr=(int *)malloc(iNoOfElement*sizeof(int));
    
    if(NULL==pPtr)
    {
        printf("\nMemory Allocation is failed.");
        return -1;
    }

    for(iCounter=0;iCounter<iNoOfElement;iCounter++)
    {
        printf("\nEnter arr[%d] Element :",iCounter);//Enter arr[0] Element :1,Enter arr[1] Element :2,Enter arr[2] Element :5,Enter arr[3] Element :6
        scanf("%d",&pPtr[iCounter]);
    }

    printf("\nEnter Element are:\n");  //Enter Element are:
    for(iCounter=0;iCounter<iNoOfElement;iCounter++)
        printf("\narr[%d]=%d",iCounter,pPtr[iCounter]);  //arr[0]=1,arr[1]=2,arr[2]=5,arr[3]=6
        
    if(pPtr!=NULL)
    {
        free(pPtr);
        pPtr=NULL;
    }

    return 0;
}