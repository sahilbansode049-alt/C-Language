#include <stdio.h>
int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};

    printf("\n%d", &arr); // 6422284
    //&(1D naw)

    printf("\n%d", arr); // 6422284
    //1D naw ->ele addr

    printf("\n%d", *arr); // 10
    //1D naw->elel naw(valu)

    printf("\n%d", arr[0]); // 10
    //1D->oth ele naw

    printf("\n%d", &arr + 1); // 6422304
    //all arr addr+1

    printf("\n%d", arr + 1); // 6422288
    //elel size ne pudhe

    printf("\n%d", *arr + 1); // 11
    //value+1

    printf("\n%d", arr[0] + 1); // 11
    //value+1

    printf("\n%d", arr + 2); // 6422292
    //ele size 2 da pudhe

    printf("\n%d", *(arr + 2)); // 30
    //1D->(ele addr)->naw

    printf("\n%d", arr[2]); // 30
    //1D->3rd ele naw

    printf("\n%d", *(arr + 2) + 1); // 31
    //value +1

    printf("\n%d", arr[2] + 1); // 31
    //vlaue+1

    return 0;
}