#include <stdio.h>

int main(void)
{ 
  int no1=0;
  int no2=1;
  int no3=2;
  
  int ans1;
  
  ans1= no1 && ++no2 || no3++;
  printf("%d\n%d\n%d\n%d",no1,no2,no3,ans1);  //0 1 3 1 (each no in new line)

  return 0;
}


  