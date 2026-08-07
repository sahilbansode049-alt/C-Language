#include <stdio.h>
int main(void)
{
    int arr[][4] = {10, 20, 30, 40, 50, 60, 70, 80, 92}; // or int arr[3][4]

    printf("\n%d", &arr); // 6422256
    //&(2D naw)->2D addr

    printf("\n%d", arr); // 6422256
    //2D naw(1D addr)

    printf("\n%d", *arr); // 6422256
    //2D ->1D naw(ele addr)

    printf("\n%d", **arr); // 10
    //2D->1D->ele naw(value)

    printf("\n%d", arr[0]); // 6422256
    //2D->0th 1D naw (ele addr)

    printf("\n%d", arr[1]); // 6422272
    //2D->1th 1D naw (ele addr)

    printf("\n%d", arr[2]); // 6422288
    //2D->2th 1D naw (ele addr)

    printf("\n%d", arr[0][0]); // 10
    //2D->0th 1D->0th ele naw (value)

    printf("\n%d", arr[1][0]); // 50
    //2D->1th 1D->0th ele naw (value)

    printf("\n%d", arr[2][0]); // 92
    //2D->2th 1D->0th ele naw (value)

    printf("\n%d", arr[0][0] + 1); // 11
    //value+1

    printf("\n%d", arr[1][0] + 1); // 51
    //value+1

    printf("\n%d", arr[2][0] + 1); // 93
    //value+1

    printf("\n%d", arr[0] + 1); // 6422260
    //ele size ne pudhe

    printf("\n%d", arr[1] + 1); // 6422276
    //ele size ne pudhe 

    printf("\n%d", arr[2] + 1); // 6422292
    //ele size ne pudhe

    printf("\n%d", &arr + 1); // 6422304
    //2D size ne pudhe

    printf("\n%d", arr + 1); // 6422272
    //1D size ne pudhe

    printf("\n%d", *arr + 1); // 6422260
    //ele size ne pudhe

    printf("\n%d", **arr + 1); // 11
    //value+1

    printf("\n%d", arr + 2); // 6422288
    //1D size 2da pudhe

    printf("\n%d", *(arr + 2)); // 6422288
    
    printf("\n%d", *(arr + 2) + 3); // 6422300

    printf("\n%d", *(*(arr + 2) + 3)); // 0
    //2D naw(1d addr)
    
    printf("\n%d", &arr[1]); // 6422272
    //&(2D->1st 1d naw)->1D addr

    printf("\n%d", &arr[1] + 1); // 6422288
    ////1D size ne pudhe

    // printf("\n%d", &(arr + 2));   // error: lvalue required as unary '&' operand printf("\n%d", &(arr + 2));

    // printf("\n%d", &(arr + 2) + 1);   //error: lvalue required as unary '&' operand printf("\n%d", &(arr + 2) + 1);

    return 0;
}