#include<stdio.h>

int main(int argc,char *argv[])
{
    int ans;

    if(argc!=3)
    {
       puts("Invalid Argument:Program Name No1 No2");
       return 0;
    }
    ans = atoi(argv[1]) + atoi(argv[2]);

    printf("Answer is %d\n",ans);

    return 0;
}


/*
int main(int argc,char *argv[],char *envp[])
{
    int counter;

    puts("Enviornment setting are:");
  
    for(counter=0;envp[counter]!=NULL;counter++);
    puts(envp[counter]);

    return 0;
}
*/
