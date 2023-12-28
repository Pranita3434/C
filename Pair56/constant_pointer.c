#include<stdio.h>
/*
//1...................
int main(void)
{
    int no=10;
    int *p=&no;

    no++;        //Allowed,as no is non constant
    (*p)++;      //Allowed,as pointing to non constant
    p++;         //Allowed,as p is non constant
    
    return 0;
}

//2..................
int main(void)
{
    const int no=10;
    const int *p=&no;

    no++;        //Error,as no is constant
    (*p)++;      //Error,as pointing to constant
    p++;         //Allowed,as p is non constant
    
    return 0;
}

//3..................
int main(void)
{
    int no=10;
    const int *p=&no;

    no++;        //Allowed,as no is non constant
    (*p)++;      //Error ,as pointing to constant
    p++;         //Allowed,as p is non constant
    
    return 0;
}

//4..................
int main(void)
{
    const int no=10;
    int *p=&no;

    no++;        //Error,as no is constant
    (*p)++;      //Allowed,as pointing to non constant
    p++;         //Allowed,as p is non constant
    
    return 0;
}

//5..................
int main(void)
{
    int no=10;
    int const * const p=&no;

    no++;        //Allowed,as no is non constant
    (*p)++;      //Error,as pointing to constant
    p++;         //Error,as p is constant
    
    return 0;
}

//6..................
int main(void)
{
    int no=10;
    const int *const p=&no;

    no++;        //Error,as no is constant
    (*p)++;      //Error,as pointing to constant
    p++;         //Error,as p is constant
    
    
    return 0;
}

*/
