#include<stdio.h>

int fun(void);

int main(void)
{
    int ans;

    ans = fun();

    printf("%d",ans);            //5

    return 0;
}
int fun(void)
{
    printf("Hello");             //Hello
}

