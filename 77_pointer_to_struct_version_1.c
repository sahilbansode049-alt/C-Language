#include <stdio.h>
struct demo
{
    int iNo;
    float fNo;
};

void Scan(struct demo *);
void Print(struct demo);

int main(void)
{
    struct demo obj;

    Scan(&obj);
    Print(obj);

    return 0;
}

void Scan(struct demo *pPtr)
{
    printf("\nEnter integer:"); // Enter integer:10
    scanf("%d", &((*pPtr).iNo));

    printf("\nEnter Float:"); // Enter Float:20
    scanf("%f", &(pPtr->fNo));
}

void Print(struct demo obj)
{
    printf("\nInteger %d", obj.iNo);    // Integer 10
    printf("\nFloat is %.2f", obj.fNo); // Float is 20.00
}
