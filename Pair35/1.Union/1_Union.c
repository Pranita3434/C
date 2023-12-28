#include<stdio.h>

union demo
{
   int no1;
   int no2;
   int no3;
};

int main(void)
{
   union demo obj;

   printf("The no1 is %d\nThe no2 is %d\nThe no3 is %d\n\n",obj.no1,obj.no2,obj.no3);   //1 1 1

   obj.no1=10;

   printf("The no1 is %d\nThe no2 is %d\nThe no3 is %d\n\n",obj.no1,obj.no2,obj.no3);   //10 10 10

   obj.no2=20;
 
   printf("The no1 is %d\nThe no2 is %d\nThe no3 is %d\n\n",obj.no1,obj.no2,obj.no3);   //20 20 20

   obj.no3=30;

   printf("The no1 is %d\nThe no2 is %d\nThe no3 is %d\n\n",obj.no1,obj.no2,obj.no3);   //30 30 30

   return 0;
}






   