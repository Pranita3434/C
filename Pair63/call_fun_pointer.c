#include<stdio.h>

int addition(int no1,int no2)
{
    return no1+no2;
}

int multiplication(int no1,int no2)
{
     return no1*no2;
}

int main(void)
{
    int ans;

    int (*fptr)(no1,no2) =NULL;

    fptr = addition;
    ans = fptr(10,20);
    printf("Ans Of Addition is %d\n",ans);

    fptr = multiplication;
    ans =fptr(10,20);
    printf("Ans Of Multiplication is %d\n",ans);

    return 0;
}