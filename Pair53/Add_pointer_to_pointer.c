#include<stdio.h>

int main(void)
{
    int arr[5]={10,20,30,40,50};

    int *p1=arr;
    int *p2=&arr[4];

    printf("The Value Of P1 is :%d\n",p1);
    printf("The Value Of P2 is :%d\n",p2);
//  printf("%d",p1+p2);      //ERROR

    return 0;
}

/*
OUTPUT:
The Value Of P1 is :5240812
The Value Of P2 is :5240828
*/
