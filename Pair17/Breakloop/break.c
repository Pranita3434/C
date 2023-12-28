#include <stdio.h>

int main(void)
{

   int counter;

   for(counter=1;counter<=10;counter++)
   {   
           if(counter%2==0)
               break;

           printf("%d\n",counter);
    }

    return 0;
}

// Output:1
