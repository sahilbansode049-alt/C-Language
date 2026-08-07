#include <stdio.h>
struct demo
{
    int iNo;
    float fNo;
};

void ObjectAssignment(struct demo, struct demo *, struct demo *);

int main(void)
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    printf("\nEnter obj1 values:");   // Enter obj1 values:
    printf("\nEnter Integer value:"); // Enter Integer value:5
    scanf("%i", &obj1.iNo);
    printf("\nEnter Float value:"); // Enter Float value:4.3
    scanf("%f", &obj1.fNo);

    ObjectAssignment(obj1, &obj2, &obj3);

    printf("\nobj1 values are:");                // obj1 values are:
    printf("\nInteger value is %.2i", obj1.iNo); // Integer value is 05
    printf("\nFloat value is %.2f", obj1.fNo);   // Float value is 4.30

    printf("\n\nobj2 values are:");            // obj2 values are:
    printf("\nInteger value is %i", obj2.iNo); // Integer value is 5
    printf("\nFloat value is %.2f", obj2.fNo); // Float value is 4.30

    printf("\n\nobj3 values are:");              // obj3 values are:
    printf("\nInteger value is %.2i", obj3.iNo); // Integer value is 05
    printf("\nFloat value is %.2f", obj2.fNo);   // Float value is 4.30

    return 0;
}

void ObjectAssignment(struct demo obj1, struct demo *pobj2, struct demo *pobj3)
{
    *pobj2 = obj1;
    // or pobj2->iNo=obj1.iNo;   we can put obj1 values one by one in pobj2
    // or pobj2->fNo=obj1.fNo;   we can put obj1 values one by one in pobj2

    pobj3->iNo = obj1.iNo;
    pobj3->fNo = obj1.fNo;
    // or *pobj3=obj1;   we can put obj1 values directly in pobj3
}