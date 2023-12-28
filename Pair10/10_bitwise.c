#include <stdio.h>

int main(void)
{ 
    int no1=20;
    int no2=14;
    int no3=8;

    int ans1;
   
    ans1 = no1 & no2;
    printf("%d\n\n",ans1);           //4

    ans1 = no1 | no2;
    printf("%d\n\n",ans1);           //30

    ans1 = no1 ^ no2;
    printf("%d\n\n",ans1);           //26

    ans1 = ~no1;
    printf("%d\n",ans1);             //-21

    ans1 = ~no2;
    printf("%d\n\n",ans1);           //-15

    ans1 = no1<<1;
    printf("%d\n",ans1);             //40

    ans1 = no1>>1;
    printf("%d\n",ans1);             //10

    ans1 = no1<<2;
    printf("%d\n",ans1);             //80  
    
    ans1 = no1>>2;
    printf("%d\n\n",ans1);           //5

    ans1 = no3<<1;
    printf("%d\n",ans1);             //16 

    ans11 = no3>>1;
    printf("%d\n",ans11);         //4

    ans12 = no3<<2;
    printf("%d\n",ans12);         //32

    ans13 = no3>>2;
    printf("%d\n",ans13);         //2

    return 0;
}

   

    

    

    
    
    
  