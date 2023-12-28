#include<stdio.h>

void fun(void);

int main(void)
{
   extern int no;

   printf("In main %d\n",no); //10
 
   fun( );

   return 0;
}

   