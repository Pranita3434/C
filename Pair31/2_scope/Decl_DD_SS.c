#include<stdio.h>

int main(void)
{
    extern int no;
    extern char no;

    printf("%d",no);  //redefinition
 
    return 0;
}
int no=10;

