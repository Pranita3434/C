#include<stdio.h>


int main(void)
{
    struct demo
   {
      /*char ch1;    12
      int  ino;
      char ch2;
      */

      char ch1;     // 8
      char ch2;
      int  ino;

    }obj;

   printf("%d",sizeof(obj));

   return 0;
}

   