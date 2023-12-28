#include<stdio.h>

int main(void)
{ 
    int no = 10;
    char ch = 'A';
    float fno = 57.33f;
    double dno = 69.33;

    printf("%d\n",sizeof(int));          //4
    printf("%d\n",sizeof(char));         //1
    printf("%d\n",sizeof(float));        //4
    printf("%d\n\n",sizeof(double));     //8

    printf("%d\n",sizeof(no));           //4
    printf("%d\n",sizeof(ch));           //1
    printf("%d\n",sizeof(fno));          //4
    printf("%d\n\n",sizeof(dno));        //8

    printf("%d\n",sizeof(20));           //4
    printf("%d\n",sizeof('B'));          //4
    printf("%d\n",sizeof(99.99f));       //4
    printf("%d\n\n",sizeof(99.99));      //8
 
    printf("%d\n",sizeof no);            //4
    printf("%d\n\n",sizeof 20);          //4
    //printf("%d\n",sizeof int);         //Error
    
    printf("%d\n",no);                   //10
    printf("%d\n",sizeof(++no));         //4
    printf("%d\n",no);                   //10

    return 0;

}

    


