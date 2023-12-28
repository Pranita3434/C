#include <stdio.h>

int main(void)
{ 
  int no1=10;
  int no2=20;

  int ans1;
  
  ans1= no1<no2;       
  printf("%d\n\n",ans1);       //1

  ans1= no1>no2;
  printf("%d\n\n",ans1);       //0

  ans1= no1<=no2;
  printf("%d\n\n",ans1);       //1
 
  ans1= no1>=no2;
  printf("%d\n\n",ans1);       //0

  ans1= no1<=no1;
  printf("%d\n\n",ans1);       //1

  ans1= no1>=no1;
  printf("%d\n\n",ans1);       //1

  ans1= no1==no1;
  printf("%d\n\n",ans1);       //1

  ans1= no1!=no1;
  printf("%d\n\n",ans1);       //0

  ans1= no1==no2;
  printf("%d\n\n",ans1);       //0

  ans1= no1!=no2;
  printf("%d\n",ans1);         //1 

  

  return 0;
}

