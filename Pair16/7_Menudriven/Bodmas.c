#include <stdio.h>
int addition(int no1,int no2);
int substraction(int no1,int no2);
int module(int no1,int no2);
int division(int no1,int no2);
int multiplication(int no1,int no2);

int main(void)
{
    int no1;
    int no2;

    int ans;
    int choice;

    printf("1.Addition\n2.Substarction\n3.Module\n4.Division\n5.Multiplication\n\n");
	
	printf("Enter Your Choice:");
    scanf("%d",&choice);

    if(choice<=0 || choice>=6)
    {
        printf("Invalid Choice");
      
        return -1;

    }

    printf("Enter Two Numbers:");
    scanf("%d%d",&no1,&no2);

    switch(choice)
    {
       case 1:
           ans=addition(no1,no2);
           break;

       case 2:
           ans=substraction(no1,no2);
           break;

       case 3:
           ans=module(no1,no2);
           break;

       case 4:
           ans=division(no1,no2);
           break;

       case 5:
           ans=multiplication(no1,no2);
     }
    
      printf("Answer is:%d\n",ans);

     return 0;
}


int addition(int no1,int no2)
{
     return no1+no2;
}


int substraction(int no1,int no2)
{
     return no1-no2;
}


int module(int no1,int no2)
{
     return no1%no2;
}


int division(int no1,int no2)
{
     return no1/no2;
}


int multiplication(int no1,int no2)
{
     return no1*no2;
}


/*
Output:
1.Addition
2.Substarction
3.Module
4.Division
5.Multiplication

Enter Your Choice:6
Invalid Choice


1.Addition
2.Substarction
3.Module
4.Division
5.Multiplication

Enter Your Choice:1
Enter Two Numbers:2 3
Answer is:5

*/





     


       
          


















   

    
    

