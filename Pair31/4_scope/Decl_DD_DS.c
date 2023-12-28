#include<stdio.h>

extern int no;
int main(void)
{
    extern char no;      //redefinition

    printf("%d",no);  
 
    return 0;
}
int no=10;