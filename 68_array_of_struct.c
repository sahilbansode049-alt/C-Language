#include <stdio.h>
#define MAX 3
struct demo
{
    int iNo;
    float fNo;
};
int main(void)
{
    int iCounter;
    struct demo arr[MAX];

    for (iCounter = 0; iCounter < MAX; iCounter++)
    {
        printf("\nEnter obj%d value:", iCounter + 1);
        printf("\nEnter enteger value:"); // Enter enteger value:2  //Enter enteger value:4  //Enter enteger value:5
        scanf("%d", &arr[iCounter].iNo);
        printf("\nEnter float value:"); // Enter float value:2.3  //Enter float value:2.6  //Enter float value:2.9
        scanf("%f", &arr[iCounter].fNo);
    }

    for (iCounter = 0; iCounter < MAX; iCounter++)
    {
        printf("\nInteger is %.4d", arr[iCounter].iNo); // Integer is 0002  //Integer is 0004 //Integer is 0005
        printf("\nFloat is %.2f", arr[iCounter].fNo);   // Float is 2.30  //Float is 2.60  //Float is 2.90
    }

    printf("size of arr is %d", sizeof(struct demo)); // size of arr is 8

    printf("\nsize of Integer is %d", sizeof(arr[MAX].iNo)); // size of Integer is 4

    return 0;
}