#include<stdio.h>

int main(void)
{
    int arr[5]={10,20,30,40,50};
     
    int *p=&arr[0];
    
    printf("The value of &p is :%d\n",&p);
    printf("The value of p is :%d\n",p);
    printf("The value of *p is :%d\n\n",*p);
    
    ++p;
    
    printf("The value of &p is :%d\n",&p);
    printf("The value of p is :%d\n",p);
    printf("The value of *p is :%d\n",*p);
    
    return 0;
    
}

/*
OUTPUT:
The value of &p is :7600856
The value of p is :7600832
The value of *p is :10

The value of &p is :7600856
The value of p is :7600836
The value of *p is :20
*/