#include<stdio.h>
#include<stdarg.h>

int myprintf(const char*,...);

int main(void)
{
    int ans;

    ans = myprintf("Hello\n");
    myprintf("Answer is %d\n",ans);

    myprintf("%d\n",10);
    myprintf("%d%d\n",10,20);
    myprintf("%d%c\n",10,'A');
    myprintf("%c%d\n",'A',10);
    myprintf("%d%c%f%lf\n",10,'A',57.33f,56.33);

    ans = myprintf(2,10,30);
    myprintf("Answer is %d\n",ans);

    ans = myprintf(3,10,20,30);
    myprintf("Answer is %d\n",ans);

    ans = myprintf(4,10,20,30,40);
    myprintf("Answer is %d\n",ans);

    return 0;
}
int myprintf(const char *format,...)
{
    int ret;
    va_list p_arg = NULL;

