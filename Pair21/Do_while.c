#include<stdio.h>

int main(void)
{
    int counter;

    counter=0;
    do
    {
       printf("%d\n",counter);
       counter++;
    }
    while(counter<3);

    return 0;

}

/*
Output:
  0
  1
  2
*/