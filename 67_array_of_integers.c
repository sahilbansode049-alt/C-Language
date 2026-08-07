#include <stdio.h>
#define MAX 5
int main(void)
{
    int arr[MAX];
    int iCounter;

    for (iCounter = 0; iCounter < MAX; iCounter++)
    {
        printf("\nEnter the number %d:\t", iCounter + 1); // Enter the number 1:     5
        scanf("%d", &arr[iCounter]);
    } // Enter the number 2:     8   // Enter the number 3:     6   //Enter the number 4:     4 // Enter the number 5:     3

    for (iCounter = 0; iCounter < MAX; iCounter++)
        printf("\nNumber %d is %d", iCounter + 1, arr[iCounter]); // Number 1 is 5
                                                                  // Number 2 is 8
    return 0;                                                     // Number 3 is 6
                                                                  // Number 4 is 4
                                                                  // Number 5 is 3
}