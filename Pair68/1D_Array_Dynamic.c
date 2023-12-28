#include<stdio.h>

int main(void)
{
    int *p = NULL;

    p = (int*) malloc(5 * sizeof(int));

    //p = int *calloc(5,sizeof(int));

    //p = int*realloc(NULL,5,5*sizeof(int));

    if(p == NULL)
    {  
        printf("Memory Allocation Failed");
        return -1;
    }

    //Use memeory

    if(p != NULL)
    {
        free(p);
        p = NULL;

    }

    return 0;
}



  