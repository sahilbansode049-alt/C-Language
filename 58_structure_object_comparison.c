#include <stdio.h>
#define EQUAL 1
#define NOTEQUAL 0
struct demo
{
    int iNo;
    float fNo;
};

int CompareObjects(struct demo obj1, struct demo obj2);

int main(void)
{
    int iRet;
    struct demo obj1;
    struct demo obj2;

    printf("\nEnter obj1 values:"); // Enter obj1 values:  //Enter obj1 values:
    printf("\nEnter integer:");     // Enter integer:5  //Enter integer:5
    scanf("%d", &obj1.iNo);
    printf("Enter flaot:"); // Enter flaot:4    //Enter flaot:8
    scanf("%f", &obj1.fNo);

    printf("\nEnter obj2 values:"); // Enter obj2 values:  //Enter obj2 values:
    printf("\nEnetr integer:");     // Enter integer:5   //Enetr integer:5
    scanf("%d", &obj2.iNo);
    printf("\nEnter float:"); // Enter flaot:4  //Enter float:9
    scanf("%f", &obj2.fNo);

    printf("\nobj1 values are:");              // obj1 values are:  //obj1 values are:
    printf("\ninteger value is %d", obj1.iNo); // integer value is 5  //integer value is 5
    printf("\nfloat value is %.2f", obj1.fNo); // float value is 4.00  //float value is 8.00

    printf("\nobj2 values are:");              // obj2 values are:  //obj2 values are:
    printf("\ninteger value is %d", obj2.iNo); // integer value is 5 //integer value is 5
    printf("\nfloat value is:%.2f", obj2.fNo); // float value is:4.00  //float value is:9.00

    iRet = CompareObjects(obj1, obj2);

    if (iRet == EQUAL)
        printf("\nobject are equal");
    else
        printf("\nobject are not equal"); // object are not equal

    return 0;
}
int CompareObjects(struct demo obj1, struct demo obj2)
{
    if (obj1.iNo == obj2.iNo && obj1.fNo == obj2.fNo)
        return EQUAL;
    else
        return NOTEQUAL;
}