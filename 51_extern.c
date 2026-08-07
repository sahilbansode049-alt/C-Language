int g_iNo1;             // definition ,storage extern
int g_iNo2 = 10;        // definition ,storage class-extern
extern int g_iNo3;      // storage class is extern,declaration
//extern int g_iNo4 = 20; // definition ,storage class-extern
#include <stdio.h>
int main(void)
{
    int iNo1;             // definition // stotage class -auto
    int iNo2 = 30;        // definotion // storage class-auto
    //extern int iNo3;      // declaration // No storage
    //extern int iNo4 = 40; // 4:12: warning: 'g_iNo4' initialized and declared 'extern' extern int g_iNo4 = 20

    printf("\n%d", g_iNo1); // 0
    printf("\n%d", g_iNo2); // 10
    //printf("\n%d", g_iNo3); // 51_extern.c:(.text+0xf): undefined reference to `g_iNo3'
    //printf("\n%d", g_iNo4); // 11:16: error: 'iNo4' has both 'extern' and initializer extern int iNo4= 40;

    printf("\n%d", iNo1); // 3993600
    printf("\n%d", iNo2); // 30
    //printf("\n%d", iNo3); // 51_extern.c:(.text+0x24): undefined reference to `iNo3'
    //printf("\n%d", iNo4);  //4:12: warning: 'g_iNo4' initialized and declared 'extern' extern int g_iNo4 = 20

    return 0;
}