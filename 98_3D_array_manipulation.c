#include <stdio.h>
int main(void)
{
    int arr[3][2][4] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    printf("\n%d", arr[0]); // 6422208
    //3D->0th 2D naw(1D addr)

    printf("\n%d", arr[0][0]); // 6422208
    //3D->0th 2D ->th 1D naw(ele addr)

    printf("\n%d", arr[0][0][0]); // 10
    //3D->0th 2D->0th 1D-0th elenaw(value)

    printf("\n%d", arr[1]); // 6422240
    //3D->1st 2D naw (1D addr)

    printf("\n%d", arr[1][0]); // 6422240
    //3D->1st 2D->0th 1D->0th ele naw(value)

    printf("\n%d", arr[1][0][0]); // 90
    //3D->1st 2D->0th 1D->0th ele naw(value)

    printf("\n%d", arr[2]); // 6422272
    //3d->2nd 2D naw(1D addr)

    printf("\n%d", arr[2][0]); // 6422272
    //3D->2nd 2D->0th 1D naw

    printf("\n%d", arr[2][0][0]); // 0
    //3D->2nd 2D->0th 1D->0th ele naw(value)

    printf("\n%d", arr[0] + 1); // 6422224
    //1D size ne pudhe

    printf("\n%d", arr[0][0] + 1); // 6422212
    //ele size ne pudhe

    printf("\n%d", arr[0][0][0] + 1); // 11
    //value+1

    printf("\n%d", arr[1] + 1); // 6422256
    //1D size ne pudhe

    printf("\n%d", arr[1][0] + 1); // 6422244
    //ele size ne pudhe

    printf("\n%d", arr[1][0][0] + 1); // 91
    //value+1

    printf("\n%d", arr[2] + 1); // 6422288
    //1D size ne pudhe

    printf("\n%d", arr[2][0] + 1); // 6422276
    //ele size ne pudhe

    printf("\n%d", arr[2][0][0] + 1); // 1
    //value+1

    printf("\n%d", &arr[2]); // 6422272
    //&(3D->2nd 2D naw)->2D addr

    printf("\n%d", &arr[2][0]); // 6422272
    //&(3D->2nd 2D->0th 1D naw)->1D addr

    printf("\n%d", &arr[2][0][0]); // 6422272
    //&(3D->2nd 2D->0th 1D->0th ele naw)ele addr

    printf("\n%d", &arr[2] + 1); // 64222304
    //2D size ne pudhe

    printf("\n%d", &arr[2][0] + 1); // 6422288
    //1D size ne pudhe

    printf("\n%d", &arr[2][0][0] + 1); // 6422276
    //ele size ne pudhe

    printf("\n%d", *(arr[2])); // 6422272
    //*(3D->2nd 2D naw)->1D naw(ele addr)

    printf("\n%d", *(arr[2][0])); // 0

    //printf("\n%d",*(arr[2][0][0]));   //83:19: error: invalid type argument of unary '*' (have 'int') printf("\n%d",*(arr[2][0][0]));

    printf("\n%d", *(arr[2]) + 1); // 6422276

    printf("\n%d", *(arr[2][0]) + 1); // 1

    //printf("\n%d",*(arr[2][0][0])+1);   //:89:19: error: invalid type argument of unary '*' (have 'int')  printf("\n%d",*(arr[2][0][0])+1);

    printf("\n%d", &arr); // 6422208

    printf("\n%d", arr); // 6422208

    printf("\n%d", *arr); // 6422208

    printf("\n%d", **arr); // 6422208

    printf("\n%d", ***arr); // 10

    printf("\n%d", &arr + 1); // 6422304

    printf("\n%d", arr + 1); // 6422240

    printf("\n%d", *arr + 1); // 6422224

    printf("\n%d", **arr + 1); // 6422212

    printf("\n%d", ***arr + 1); // 11

    printf("\n%d", &(**arr)); // 6422208

    printf("\n%d", &(**arr) + 1); // 6422224

    printf("\n%d", arr + 2); // 6422272

    printf("\n%d", *(arr + 2)); // 6422272

    printf("\n%d", *(arr + 2) + 1); // 6422288

    printf("\n%d", *(*(arr + 2) + 1)); // 6422288

    printf("\n%d", *(*(arr + 2) + 1) + 3); // 6422300

    printf("\n%d", *(*(*(arr + 2) + 1) + 3)); // 0

    return 0;
}
