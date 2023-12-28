#include<stdio.h>
#include<malloc.h>

int main(void)
{
    int *p=NULL;
    int no=5;
    
    p=(int*) calloc(5,sizeof(int));

    if(p==NULL)
    {
       printf("Memory Allocation Failure");
       return -1;
    }
     
    //Use of Memory


    if(p!=NULL)
    {
       free(p);
       p =NULL;       //To Avoid Dangling Pointer
    }

    return 0;
}
 
