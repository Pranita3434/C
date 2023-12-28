#include<stdio.h>
struct demo
{
    int ino;
    float fno;
};

int main(void)
{
    struct demo obj;

    struct demo *p=&obj;

    printf("Enter The Values of Integer:"); 
    scanf("%d",&(*p).ino);

    printf("Enter The Values of float:");
    scanf("%lf",&(p->fno));

    printf("Integer value is %d",p->ino);
    printf("Float value is %lf",p->fno);
 
    return 0;
}

//query............
