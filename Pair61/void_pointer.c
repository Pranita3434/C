#include<stdio.h>

int main(void)
{
    int no =10;
    void *p=&no;

    printf("%d\n",no);               //10
    printf("%d\n",&no);              //15727052
    printf("%d\n",p);                //15727052
    printf("%d\n",&p);               //15727056
//  printf("%d\n",*p);               //Error: illegal indirection
    printf("%d\n",*(int*)p);         //10
 
    return 0;
}
