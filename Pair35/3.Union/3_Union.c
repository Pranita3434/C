#include<stdio.h>

union demo
{
   char ch;
   int ino;
   double dno;
};

int main(void)
{
   union demo obj;

   printf(" The ch is %c\n The ino is %d\n The dno is %lf\n\n",obj.ch,obj.ino,obj.dno);   //g g g

   obj.ch='A';

   printf(" The ch is %c\n The ino is %d\n The dno is %lf\n\n",obj.ch,obj.ino,obj.dno);   // A g g

   obj.ino=10;
 
   printf(" The ch is %c\n The ino is %d\n The dno is %lf\n\n",obj.ch,obj.ino,obj.dno);   //g 10 g

   obj.dno=99.99;
   
   printf(" The ch is %c\n The ino is %d\n The dno is %lf\n\n",obj.ch,obj.ino,obj.dno);   //g g 99.99
   
   return 0;
}





   