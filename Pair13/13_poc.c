#include<stdio.h>

int main(void)
{
   int no1=0;
   int no2=1;
   int no3=2;

   int ans;

   ans= ++no1 || ++no2 && no3;

   printf("%d\n%d\n%d\n%d",no1,no2,no3,ans);  // 1 1 2 1 

   return 0;

}
   