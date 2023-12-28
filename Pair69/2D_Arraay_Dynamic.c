#include<stdio.h>
#include<malloc.h>

int main(void)
{
    int **p = NULL;

    //scan rows and columns

    p= (int**) malloc(row* sizeof(int*));
 
    if(p==NULL)
    {
        printf("Memory Failed");
 
        return -1;
    }
   
    for(counter=0;counter<rows;counter++)
    {
        p[counter]=(int*)malloc(columns*sizeof(int));

        if(p[counter]==NULL)
        {
            printf("Memory Failed");
 
            return -1;
        }

     //Accpet values from user
    }
  
    //print values to user

    for(counter=0;counter<rows;column++)
    {
        free(p[counter])=NULL;

        p[counter]==NULL;
    }

    free p;
    p=NUll;
   
    return 0;
}


       
        

   

     
