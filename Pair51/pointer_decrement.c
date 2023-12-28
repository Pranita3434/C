#include<stdio.h>

int main(void)
{
    char arr[5]={'A','B','C','D','E'};
     
    char *p=&arr[4];
    
    printf("The value of &p is :%d\n",&p);
    printf("The value of p is  :%d\n",p);
    printf("The value of *p is :%c\n\n",*p);
    
    --p;
    
    printf("The value of &p is :%d\n",&p);
    printf("The value of p is  :%d\n",p);
    printf("The value of *p is :%c\n",*p);
    
    return 0;
    
}

/*
OUTPUT:
The value of &p is :17824724
The value of p is  :17824716
The value of *p is :E

The value of &p is :17824724
The value of p is  :17824715
The value of *p is :D
*/