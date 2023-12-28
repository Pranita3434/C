#include <stdio.h>

int main(void)
{ 
  int no1=1;
  int no2=0;
  int no3=10;
  int no4=20;
  int no5=-30;
  int no6=-40;

  int ans1;
  
  ans1= no1&&no1;
  printf("%d\n\n",ans1);       //1

  ans1= no1&&no2;
  printf("%d\n\n",ans1);       //0

  ans1= no1||no2;
  printf("%d\n\n",ans1);       //1

  ans1= no2||no2;
  printf("%d\n\n",ans1);       //0

  ans1= no2||no1;                                                                 
  printf("%d\n\n",ans1);       //1
  
  ans1= !no1;
  printf("%d\n\n",ans1);       //0

  ans1= no3&&no4;
  printf("%d\n\n",ans1);       //1

  ans1= no3&&no5;
  printf("%d\n\n",ans1);       //1

  ans1= no3||no5;
  printf("%d\n\n",ans1);       //1

  ans1= no5||no6;
  printf("%d\n\n",ans1);      //1
  
  ans1= !no5;
  printf("%d\n\n",ans1);      //0

  ans1= !no4;
  printf("%d\n\n",ans1);      //0

  return 0;
}
  
