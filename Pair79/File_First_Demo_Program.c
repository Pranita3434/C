#include<stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char ch;

    fp = fopen("demo.txt","r");
    
    if(fp = NULL)
    {
        printf("File Opening Failed");
        return -1;
    }

    while(1)
    {
        ch = fgetc(fp);
        
        if(ch = EOF)
            break;

        printf("%C",ch);
    }

    if(fp != NULL)
    {
        fclose(fp);
        fp = NULL;
    }

    return 0;
}

