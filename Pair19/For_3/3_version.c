#include<stdio.h>

int main(void)
{
    int counter;

    for(counter=1;  ;counter++)
    {
         if(counter>=3)
         break;

         printf("%d\n",counter);
    }
   
    return 0;

}


//Output : 1 2 