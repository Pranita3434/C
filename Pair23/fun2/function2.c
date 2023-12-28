#include<stdio.h>

void addition(int,int);

int main(void)
{
   int no1;
   int no2;

   printf("Enter Two Numbers:");
   scanf("%d%d",&no1,&no2);

   addition(no1,no2);
   
   return 0;
}

void addition(int no1,int no2)
{
   int ans;

   ans= no1+no2;

   printf("Answer is %d",ans);

}

/*
Output:
Enter Two Numbers:2 3
Answer is 5
*/
    