#include <stdio.h>
int main(void)
{
    double arr[] = {10.20, 20.20, 30.10, 10.30, 10.10};

    double *pPtr = &arr[2];

    printf("\n%d", pPtr);     // 6422272
    printf("\n%.2lf", *pPtr); // 30.10

    --pPtr;

    printf("\n%d", pPtr);     // 6422264 , (6422272-6422264)=8
    printf("\n%.2lf", *pPtr); // 20.20

    return 0;
}