#include<stdio.h>

int main(void)
{
    double arr[5]={10.55,20.55,30.55,40.55,50.55};

    double *p=arr;

    printf("The Value Of p is  :%d\n",p);
    printf("The Value Of *p is :%lf\n\n",*p);

    printf("The Value Of p+3 is:%d\n",p+3);
    printf("The Value Of *(p+3) is :%lf\n",*(p+3));
    printf("The Value Of p  is :%d\n",p);
    printf("The Value Of *p is :%lf\n",*p);


    return 0;
}

/*

OUTPUT:
The Value Of p is  :14679164
The Value Of *p is :10.550000

The Value Of p+3 is:14679188
The Value Of *(p+3) is :40.550000
The Value Of p  is :14679164
The Value Of *p is :10.550000

*/
