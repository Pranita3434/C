#include<stdio.h>

int main(void)
{
    int arr[]={10,20,30,40,50};
    int *p[]={arr,arr+1,arr+2,arr+3,arr+4};
    int **ptr=p;

    printf("%d\t%d\t%d\n",arr,*arr,&arr);

    printf("%d\t%d\t%d\n",p,*p,**p);

    printf("%d\t%d\t%d\n",ptr,*ptr,**ptr);

    printf("%d\t%d\t%d\n\n",**ptr,ptr-p,*ptr-arr);

    *++ptr;
    printf("%d\t%d\t%d\n\n",**ptr,ptr-p,*ptr-arr);

    *ptr++;
    printf("%d\t%d\t%d\n\n",**ptr,ptr-p,*ptr-arr);
 
    ++*ptr;
    printf("%d\t%d\t%d\n\n",**ptr,ptr-p,*ptr-arr);

    return 0;
}

    
