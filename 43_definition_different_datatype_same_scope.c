#include <stdio.h>
int main(void)
{
    int No = 10;     // 43_definition_different_datatype_same_scope.c:4:9: note: previous definition of 'No' was here int No=10;
    float No = 15.5; // 43_definition_different_datatype_same_scope.c:5:11: error: conflicting types for 'No' float No=15.5;

    printf("%d", No);

    return 0;
}