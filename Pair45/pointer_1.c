#include<stdio.h>

int main(void)
{
    int no=10;

    int *p=&no;

    printf("%d\n",no);     //10

    printf("%d\n",&no);    //20183224
 
    printf("%d\n",p);      //20183224

    printf("%d\n",&p);     //20183228

    printf("%d\n",*p);     //10

    return 0;
}

