#include<stdio.h>

void fun(int *p);
int main(void)
{
    int no = 10;
    int *p = &no;
    
    printf("%d\n",no);            //10
    printf("%d\n",&no);           //10288912
    printf("%d\n",p);             //10288912
    printf("%d\n",&p);            //10288916
    printf("%d\n",*p);            //10
    fun(p);
    
    return 0;
}
void fun(int *p)
{
    printf("Before increment :%d\n",*p);            //10
 
    (*p)++;

    printf("After Incerment :%d\n",*p);            //11
}