#include<stdio.h>

void fun1(void);
void fun2(void);
int main(void)
{
   int counter;

   for(counter=0;counter<3;counter++)
   {
       fun1();
   }
  
   for(counter=0;counter<3;counter++)
   {
       fun2();
   }
 
   return 0;
}
void fun1(void)
{
    int no1=10;
    no1++;
    printf("Value of Fun1 is %d\n",no1);     // 11 11 11 
}

void fun2(void)
{
    static int no2=10;
    no2++;
    printf("Value of Fun2 is %d\n",no2);     //11 12 13 
}


 