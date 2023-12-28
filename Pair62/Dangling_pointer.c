1........

#include<stdio.h>

int main(void)
{
    int *p =NULL;

    {
         int no=10;
         p=&no;
         printf("%d",*p);      //10
    }
    printf("%d",*p);           //10

    return 0;
}
  

2..............
 

#include<stdio.h>

int main(void)
{
    int *p =NULL;

    fun(&p)
    printf("%d",*p);
  
    return 0;
}

void fun(int **ptr)
{
    int no=10;

    *ptr = &no;

    printf("%d",ptr);
    printf("%d",*ptr);
    printf("%d",**ptr);
}
//After fun end goes to main