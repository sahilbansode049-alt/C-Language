#include <stdio.h>
struct demo
{
    int iNo1; // 4 byte
    int iNo2; // 4 byte
    int iNo3; // 4 byte
};
int main(void)
{
    struct demo obj;

    printf("\n%d\t%d\t%d ", obj.iNo1, obj.iNo2, obj.iNo3); //0       3379200 4194432
                                                           // becouse memory is different for each member in structure
    obj.iNo1 = 10;
    printf("\n%d\t%d\t%d ", obj.iNo1, obj.iNo2, obj.iNo3); //10      2916352 4194432

    obj.iNo2 = 20;
    printf("\n%d\t%d\t%d ", obj.iNo1, obj.iNo2, obj.iNo3); // 10      20      4194432

    obj.iNo3 = 30;
    printf("\n%d\t%d\t%d ", obj.iNo1, obj.iNo2, obj.iNo3); //10      20      30

    printf("\n%d", sizeof(obj)); // 12

    printf("\n%d", sizeof(struct demo)); // 12

    return 0;
}


