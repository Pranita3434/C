#include <stdio.h>

int main(void)
{ 
  int no1=0;
  int no2=1;
  int no3=2;
  int ans;
  
  ans = no1 && ++no2 && no3++;
  printf("%d\n%d\n%d\n%d\n",no1,no2,no3,ans); // 0 1 2 0 (each no in new line)
  
  return 0;
}
