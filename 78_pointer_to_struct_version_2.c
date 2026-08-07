#include <stdio.h>
struct demo
{
    int iNo;
    float fNo;
};

void Print(const struct demo *);
void Scan(struct demo *);

int main(void)
{
    struct demo obj;

    Scan(&obj);
    Print(&obj);

    return 0;
}

void Print(const struct demo *pPtr1)
{
    printf("\nInteger is %d", ((*pPtr1).iNo));     // Integer is 785
    printf("\nFloat value is %.3f", (pPtr1->fNo)); // Float value is 2.250
}
void Scan(struct demo *pPtr2)
{
    printf("\nEnter integer:"); // Enter integer:785
    scanf("%d", &(*(pPtr2)).iNo);

    printf("\nEnter Float:"); // Enter Float:2.25
    scanf("%f", &(pPtr2->fNo));
}
