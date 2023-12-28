#include<stdio.h>
#include<malloc.h>

int main(void)
{
    int *p=NULL;
    
    p=(int*) alloca(5*sizeof(int));

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
 
