#include <stdio.h>
struct demo
{
    int iNo;
    float fNo;
};

void ObjectAssignment(const struct demo *a, struct demo *b, struct demo *c);

int main(void)
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    printf("\nEnter obj1 values:"); // Enter obj1 values:
    printf("\nEnter Integer:");     // Enter Integer:5
    scanf("%i", &obj1.iNo);
    printf("\nEnter Float:"); // Enter Float:6.3
    scanf("%f", &obj1.fNo);

    ObjectAssignment(&obj1, &obj2, &obj3);

    printf("\n\nobj1 values are:");            // obj1 values are:
    printf("\nInteger value is %d", obj1.iNo); // Integer value is 5
    printf("\nFloat value is %.3f", obj1.fNo); // Float value is 6.300

    printf("\n\nobj2 values are:");              // obj2 values are:
    printf("\nInteger value is %.2i", obj1.iNo); // Integer value is 05
    printf("\nFloat value is %.3f", obj1.fNo);   // Float value is 6.300

    printf("\n\nobj3 values are:");            // obj3 values are:
    printf("\nInteger value is %d", obj1.iNo); // Integer value is 5
    printf("\nFloat value is %.3f", obj1.fNo); // Float value is 6.300

    return 0;
}

void ObjectAssignment(const struct demo *pobj1, struct demo *pobj2, struct demo *pobj3)
{
    *pobj2 = *pobj1;

    pobj3->iNo = pobj1->iNo;
    pobj3->fNo = pobj1->fNo;
}


