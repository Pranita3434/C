#include<stdio.h>

int main(void)
{
    int no1;
    int no2;
    int ans;
    int sum;
    int diff;

    printf("Enter Two Numbers:");
    scanf("%d%d",&no1,&no2);

    add_sub(no1,no2,&sum,&diff);
  
    printf("Addition  is %d\n.",sum);
    printf("Substraction  is %d.",diff);
    
    return 0;
}

int add_sub(int no1,int no2,int *psum,int *pdiff)
{
    *psum=no1+no2;
    *pdiff=no1-no2;
}

/*
OUTPUT :
Enter Two Numbers:2 3
Addition  is 5.
substraction  is -1.

*/
