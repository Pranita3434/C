#include<stdio.h>
//#include<malloc.h>

int main(void)
{
    int *ptr1=NULL;
    int *ptr2=NULL;
    int *ptr3=NULL;
    
    //Alocating Memory For 5 Integer(20bytes)

    ptr1=(int*) malloc(5*sizeof(int));

    if(ptr1 == NULL) 
    {
      printf("Memory Allocation Failed");
      return -1;
    }
    //Use Of 20bytes

    //Realocating Memory For 10 Integer

   
    ptr2=(int*) realloc(ptr1,10*sizeof(int));

    if(ptr2 == NULL) 
    {
      printf("Memory Allocation Failed");
      return -1;
    }

    //Use Of 40bytes

    //Realocating Memory For 3 Integer
    
    ptr3=(int*) realloc(ptr2,3*sizeof(int));
 
    if(ptr3 == NULL) 
    {
      printf("Memory Allocation Failed");
      return -1;
    }
  
    //Use Of 12bytes

   
    if(ptr1!=NULL)
    {
       free(ptr1);
       ptr1 =NULL;       
    }

    if(ptr2!=NULL)
    {
       free(ptr2);
       ptr2 =NULL;       
    }

   if(pt32!=NULL)
    {
       free(ptr3);
       ptr3 =NULL;       
    }

    return 0;
}
 
