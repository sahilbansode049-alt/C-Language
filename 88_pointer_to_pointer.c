#include <stdio.h>
int main(void)
{
    int no = 10;

    int *p = &no;

    int **q = &p;

    int ***r = &q;

    int ****s = &r;

    int *****x = &s;

    int ******y = &x;

    int *******z = &y;

    printf("\n%d", &no); // 6422300
    printf("\n%d", &p);  // 6422296
    printf("\n%d", &q);  // 6422292
    printf("\n%d", &r);  // 6422288
    printf("\n%d", &s);  // 6422284
    printf("\n%d", &x);  // 6422280
    printf("\n%d", &y);  // 6422276
    printf("\n%d", &z);  // 6422272

    printf("\n%d", q);     // 6422296
    printf("\n%d", y);     // 6422280
    printf("\n%d", *q);    // 6422300
    printf("\n%d", ***x);  // 6422296
    printf("\n%d", ****z); // 6422292
    // printf("\n%d",****r);  //34:19: error: invalid type argument of unary '*' (have 'int') printf("\n%d",****r);
    printf("\n%d", ******y);    // 10
    printf("\n%d", &(**z));     // 6422280
    printf("\n%d", &(****x));   // 6422296
    printf("\n%d", *(&(***y))); // 6422292
    printf("\n%d", **q);        // 10
    printf("\n%d", *p);         // 10
    printf("\n%d", &(*p));      // 6422300
    printf("\n%d", *(&(*p)));   // 10
    printf("\n%d", &no);        // 6422300
    printf("\n%d", *(&no));     // 10

    return 0;
}