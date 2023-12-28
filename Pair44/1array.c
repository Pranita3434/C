#include<stdio.h>

int main(void)
{
    int arr[5]={10,20,30,40,50};
    
    printf("%d\n",arr);             //11532080

    printf("%d\n",&arr);            //11532080

    printf("%d\n",arr+1);           //11532084

    printf("%d\n",&arr+1);          //11532080

    printf("%d\n",arr[2]);          //30

    printf("%d\n",&arr[2]);         //11532088

    printf("%d\n",arr[2]+1);        //31

    printf("%d\n",&arr[2]+2);       //11532096

    //printf("%d\n",++arr);         //Error '++' needs l-value

    // printf("%d\n",arr++);        //Error '++' needs l-value

    return 0;
}

    