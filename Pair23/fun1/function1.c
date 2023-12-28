#include<stdio.h>

void addition(void);

int main(void)
{
    addition( );

    return 0;
}

void addition(void)
{
    int no1;
    int no2;
    int ans;

    printf("Enter Two Numbers:");
    scanf("%d%d",&no1,&no2);

    ans=no1+no2;

    printf("Answer is %d",ans);

}

/*
Output:
Enter Two Numbers:4 3
Answer is 7

    
     