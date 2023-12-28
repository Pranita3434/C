#include<stdio.h>

int main(void)
{

   int no = 10;                         
   int ans1;
   int ans2;

   printf("\n%d",no);            //10

   ans1=++no;
   printf("\n\n%d",ans1);        //11
   printf("\n%d",no);            //11

   ans2=no++;
   printf("\n\n%d",ans2);        //11
   printf("\n%d",no);            //12

   printf("\n\n%d",no++);        //12
   printf("\n%d",no);            //13

   printf("\n\n%d",++no);        //14
   printf("\n%d",no);            //14

   printf("\n\n%d",no+1);        //15
   printf("\n%d",no);            //14

// printf("%d",+ +no);           //Error
   printf("\n\n%d",no);          //14

// printf("%d",10++);            //Error
// printf("%d",++10);            //Error

   return 0;
}
