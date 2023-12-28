#include<stdio.h>
#define MAX 2

struct demo
{
    int ino;
    float fno;
};

int main(void)
{
    struct  demo arr[MAX];
    int counter;
  
    for(counter=0;counter<MAX;counter++)
    {
       printf("Enter Object %d:\n",counter+1);
      
       printf("Enter Integer No--");
       scanf("%d",&arr[counter].ino);

       printf("Enter Float No--");
       scanf("%f",&arr[counter].fno);

    }
 
    for(counter=0;counter<MAX;counter++)
    {   
        printf("\nValues of Object %d are:\n",counter+1);
        printf("Integer Number is %d\n",arr[counter].ino);
        printf("Float Number is %f\n",arr[counter].fno);
    }

    return 0;
}
 
/*
OUTPUT:
Enter Object 1:
Enter Integer No--91
Enter Float No--18.78
Enter Object 2:
Enter Integer No--32
Enter Float No--22.11

Values of Object 1 are:
Integer Number is 91
Float Number is 18.780001

Values of Object 2 are:
Integer Number is 32
Float Number is 22.110001
*/