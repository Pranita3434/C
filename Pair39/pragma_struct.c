#include<stdio.h>

struct demo1
{
   char ch;
   double dno;
}obj1;


#pragma pack(4)
struct demo2
{
    char ch;
    double dno;
}obj2;


#pragma pack(1)
struct demo3
{
    char ch;
    double dno;
}obj3;


#pragma pack()
struct demo4
{
    char ch;
    double dno;
}obj4;

int main(void)
{
    printf("%d\n",sizeof(obj1));   //16
    printf("%d\n",sizeof(obj2));   //12
    printf("%d\n",sizeof(obj3));   //9
    printf("%d\n",sizeof(obj4));   //16

    return 0;
}










