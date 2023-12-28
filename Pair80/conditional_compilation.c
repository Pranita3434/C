#define MYSWITCH 2
#if MYSWITCH == 2
    int addition(no1,no2);
#elif MYSWITCH == 3
    int addition(no1,no2,no3);
#else
    int addition(no1,no2,no3,no4);
#endif

int main(void)
{
    int ans;

    #if MYSWITCH == 2
        int addition(no1,no2);
   
    #elif MYSWITCH == 3
        int addition(no1,no2,no3);

    #else
        int addition(no1,no2,no3,no4);
   
    #endif

    printf("Addition is %d\n",ans);

    return 0;
}

#if MYSWITCH == 2
{
     return no1+no2;
}  
#elif MYSWITCH == 3
{
      return no1+no2+no3;
}
#else
#endif

  