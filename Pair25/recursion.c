#include<stdio.h>

int fact(int);

int main(void)
{
    int no1;
    int ans;

    printf("Enter The Value:");
    scanf("%d",&no1);

    ans=fact(no1);

    printf("The Factorial Of %d Is %d",no1,ans);

    return 0;
}
int fact(int no1)
{
    if(no1==1)
       return 1;

    return no1*fact(no1-1);
}

/*
Output:
Enter The Value:15
The Factorial Of 15 Is 2004310016
*/

    