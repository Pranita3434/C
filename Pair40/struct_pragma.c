#include<stdio.h>

struct demo
{
    char ch;
    double dno;
};
#pragma pack(1)
struct demo obj;

int main(void)
{
    printf("%d",sizeof(obj));  //16
    return 0;
}










   