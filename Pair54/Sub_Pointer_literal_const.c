#include<stdio.h>

int main(void)
{
    float arr[5]={10.00f,20,30,40,50};

    float *p=&arr[4];
 
    printf("The Value Of p =%d\n",p);
    printf("The Value Of *p =%lf\n\n",*p);

    printf("The Value Of p-3 =%d\n",p-3);
    printf("The Value Of *(p-3) =%lf\n",*(p-3));

    return 0;
}

/*
OUTPUT:
The Value Of p =9436192
The Value Of *p =50.000000

The Value Of p-3 =9436180
The Value Of *(p-3) =20.000000

*/
