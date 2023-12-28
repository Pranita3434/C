#include<stdio.h>

void fun (void);
int no=10;
int main(void)
{
    int no=20;

    printf("%d\n",no);            //20
    {
        char no='A';
        printf("%d\n",no);        //65
    }
    printf("%d\n",no);            //20

    fun( );

    return 0;
}
void fun (void)
{
    printf("%d\n",no);            // 10
}