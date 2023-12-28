#include<stdio.h>

extern int no;
int main(void)
{
   extern int no;
   printf("Enter the number %d",no);  //ERROR

   return 0;
}

   