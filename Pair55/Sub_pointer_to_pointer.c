#include<stdio.h>

int main(void)
{
    int arr[5]={10,20,30,40,50};

    int *p1=arr;
    int *p2=&arr[4];

    printf("The Value Of P1 =%d\n",p1);
    printf("The Value Of P2 =%d\n",p2);
    printf("The Value Of p1-p2 =%d\n",p1-p2);
    printf("The Value Of P2-p1 =%d\n",p2-p1);

    return 0;
}

/*

OUTPUT:
The Value Of P1 =10025408
The Value Of P2 =10025424
The Value Of p1-p2 =-4
The Value Of P2-p1 =4

*/