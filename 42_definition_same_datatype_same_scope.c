#include <stdio.h>
int main(void)
{
    int No = 10; // 42_definition_same_datatype_same_scope.c:4:9: note: previous definition of 'No' was here int No=10;
    int No = 20; // 42_definition_same_datatype_same_scope.c:5:9: error: redefinition of 'No' int No=20;

    printf("%d", No);

    return 0;
}