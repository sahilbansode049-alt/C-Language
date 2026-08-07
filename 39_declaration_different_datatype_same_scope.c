#include <stdio.h>
int main(void)
{
    extern int No; // 39_declaration_different_datatype_same_scope.c:4:16: note: previous declaration of 'No' was here extern int No;

    extern float No;

    printf("%d", No);

    return 0;
}
int No = 11; // 39_declaration_different_datatype_same_scope.c:6:18: error: conflicting types for 'No' extern float No;
