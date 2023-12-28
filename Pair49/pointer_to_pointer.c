#include<stdio.h>

int main(void)
{
    int no =10;
    int *p=&no;
    int **q=&p;
    int ***r=&q;
    int ****s=&r;
    int *****x=&s;
    int ******y=&x;
    int *******z=&y;
    
    printf("The value of &p is   :%d\n",&p);
    printf("The Value of p is    :%d\n",p);
    printf("The Value of *p is   :%d\n",*p);
    printf("The Value of **q is  : %d\n",**q);
    printf("The Value of ****x is:%d\n",****x);
    //printf("%p\n",****r);                           //Error
    printf("The Value Of *******z:%d\n\n",*******z);
    
    printf("The Value Of &(***z) is :%d\n",&(***z));
    printf("The Value of &(**q) is  :%d\n",&(**q));
    printf("The value of &(*p) is   :%d\n",&(*p));
    printf("The Value Of *(&(*p)) is:%d\n",*(&(*p)));
    printf("The Value Of &no is     :%d\n",&no);
    printf("The Value Of *(&no) is  :%d\n",*(&no));
    
    return 0;
}

/*
OUTPUT
The value of &p is   :13630160
The Value of p is    :13630144
The Value of *p is   :10
The Value of **q is  : 10
The Value of ****x is:13630144
The Value Of *******z:10

The Value Of &(***z) is :13630148
The Value of &(**q) is  :13630144
The value of &(*p) is   :13630144
The Value Of *(&(*p)) is:10
The Value Of &no is     :13630144
The Value Of *(&no) is  :10
*/   
    
    
    
    
    
