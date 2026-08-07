#include <stdio.h>
union demo
{
    int iNo1;
    int iNo2;
    int iNo3; // max or all have size 4 hence size of obj is 4
};
int main(void)
{
    union demo obj;

    printf("\n%d\t%d\t%d", obj.iNo1, obj.iNo2, obj.iNo3); //4194432 4194432 4194432
                                                        // becouse memory is same not seperate for each member in unoin hence garbage value is same
    obj.iNo1 = 10;
    printf("\n%d\t%d\t%d", obj.iNo1, obj.iNo2, obj.iNo3); //10      10      10

    obj.iNo2 = 20;
    printf("\n%d\t%d\t%d", obj.iNo1, obj.iNo2, obj.iNo3); //20      20      20

    obj.iNo3 = 30;
    printf("\n%d\t%d\t%d", obj.iNo1, obj.iNo2, obj.iNo3); //30      30      30

    printf("\n%d", sizeof(obj)); // 4

    printf("\n%d", sizeof(union demo)); // 4

    return 0;
}