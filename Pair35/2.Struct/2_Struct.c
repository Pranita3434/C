#include<stdio.h>

struct demo
{
   int no1;
   int no2;
   int no3;
};

int main(void)
{
   struct demo obj;

   printf(" The no1 is %d\n The no2 is %d\n The no3 is %d\n\n",obj.no1,obj.no2,obj.no3);   // g g g

   obj.no1=10;

   printf(" The no1 is %d\n The no2 is %d\n The no3 is %d\n\n",obj.no1,obj.no2,obj.no3);   //10 g g

   obj.no2=20;
 
   printf(" The no1 is %d\n The no2 is %d\n The no3 is %d\n\n",obj.no1,obj.no2,obj.no3);   //10 20 g

   obj.no3=30;

   printf(" The no1 is %d\n The no2 is %d\n The no3 is %d\n\n",obj.no1,obj.no2,obj.no3);   //10 20 30

   return 0;
}





   