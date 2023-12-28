#include<stdio.h>

int main(void)
{
    fun("Hello");

    return 0;
}
void fun(char str[])
{ 
   str = "BYE";
   
   str[2]="Z";
}
