#include <stdio.h>
int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("\n%d", &arr); // 6422284
    //&(1-D cha name)->1-D addr

    printf("\n%d", arr); // 6422284
    // 1-D cha name->element addr

    printf("\n%d", &arr + 1); // 6422304 ,20 ne pudhe sarakla
    // 1-D size ne pudhe

    printf("\n%d", arr + 1); // 6422288
    // eleemnt size ne pudhe

    printf("\n%d", arr[2]); // 30
    // 1 D ->2nd element cha name(value)

    printf("\n%d", arr[2] + 1); // 31
    // value+1

    printf("\n%d", &arr[2]); // 6422292
    //&(1D ->element cha name)->element addr

    printf("\n%d", &arr[2] + 1); // 6422296
    // element size ne pudha janar

    printf("\n%d", arr + 4); // 6422300
    // element size ne 4 times pudhe janar

    // printf("\n%d",++arr);   //33:19: error: lvalue required as increment operand
    // arr=arr+1->100=100+1(L-value is required)

    // printf("\n%d",arr++);  //error: lvalue required as increment operand
    // arr=arr+1->100=100+1(L-value is required)

    printf("\n%d", arr[2 + 1]); // 40

    return 0;
}



