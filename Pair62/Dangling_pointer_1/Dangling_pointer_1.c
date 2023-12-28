#include<stdio.h>

int main(void)
{
    int *p =NULL;

    {
         int no=10;
         p=&no;
         printf("In Inside Block *P is %d\n",*p);      //10
    }
    printf("In Outside Block *P is %d\n",*p);           //10

    return 0;
}


/*
OUTPUT:
In Inside Block *P is 10
In Outside Block *P is 10
*/