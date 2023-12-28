#include<stdio.h>

void fun(int);
int main(void)
{
    int no1=10;

    printf("In main ,before calling function:%d\n",no1);

    fun(no1);

    printf("In main ,after calling function:%d\n",no1);


    return 0;
}
void fun(int no1)
{
    printf("In function: %d\n",no1);

    no1++;

    printf("Leaving function: %d\n",no1);
}
    
/*
Output:
In main ,before calling function:10
In function: 10
Leaving function: 11
In main ,after calling function:10
*/
    
    


   
   
    

    
    
    
    

    