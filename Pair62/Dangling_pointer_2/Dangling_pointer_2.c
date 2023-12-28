#include<stdio.h>
void fun(int** ptr);
int main(void)
{
    int *p =NULL;

    fun(&p);
    printf("The Value of *P is %d\n\n",*p);
  
    return 0;
}

void fun(int** ptr)
{
    int no=10;

    *ptr = &no; 

    printf("The Value Of ptr is %d\n",ptr);
    printf("The Value Of *ptr is %d\n",*ptr);
    printf("The Value Of **ptr is %d\n",**ptr);
}
//After fun end goes to main

/*

OUTPUT:
The Value Of ptr is 8911288
The Value Of *ptr is 8911272
The Value Of **ptr is 10
The Value of *P is 10

*/