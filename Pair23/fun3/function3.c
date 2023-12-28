#include<stdio.h>

int addition(int no1,int no2);

int main(void)
{
    int no1;
    int no2;
    int ans;
 
    printf("Enter Two Numbers:");
    scanf("%d%d",&no1,&no2);

    ans= addition(no1,no2);
    printf("Answer is %d",ans);

    return 0;
}

int addition(int no1,int no2)
{
    int ans;

    ans=no1+no2;

    return ans;

}

/*
Output:
Enter Two Numbers:54 56
Answer is 110
*/
