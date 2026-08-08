#include <stdio.h>
#define MAX 10
int main(void)
{

    int iCounter;
    int iNoOfElement;

    int arr[MAX];

    printf("\nEnetr how many Element you want? but <(%d):\t", MAX); //Enetr how many Element you want? but <(10):     4
    scanf("%d", &iNoOfElement);

    for (iCounter = 0; iCounter < iNoOfElement; iCounter++)
    {
        printf("\nEnter Element for arr[%d]:", iCounter);//Enter Element for arr[0]:10,Enter Element for arr[1]:20,Enter Element for arr[2]:30,Enter Element for arr[3]:40
        scanf("%d", &arr[iCounter]);
    }

    printf("\nArray Elements are:");  //Array Elements are:
    for (iCounter = 0; iCounter < iNoOfElement; iCounter++)
    {
        printf("\narr[%d]=%d", iCounter, arr[iCounter]);
        //arr[0]=10,arr[1]=20,arr[2]=30,arr[3]=40
    }

    return 0;
}