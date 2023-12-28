#include <stdio.h>

void fun(void);
int main(void)
{
    extern int no;

    printf("In Main Number is %d",no);

    fun();

    return 0;
}
int no=20;

