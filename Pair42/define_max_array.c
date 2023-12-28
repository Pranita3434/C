#include<stdio.h>

#define MAX 3
int main(void)
{
    int counter;
    int arr[MAX];

    for(counter=0;counter<MAX;counter++)
    {
       printf("Enter The Number %d:",counter+1);
       scanf("%d",&arr[counter]);
    }
  
    for(counter=0;counter<MAX;counter++)
    {
       printf("The Number %d is : %d\n",counter+1,arr[counter]);
    }
   
    return 0;
}




    

    















