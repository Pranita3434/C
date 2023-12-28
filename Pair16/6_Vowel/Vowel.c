#include<stdio.h>

int main(void)
{
    char ch;

    printf("Character is : ",ch);
    scanf("%c",&ch);

   switch(ch)
   {
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
           printf("%c is CAPTITAL LETTER VOWEL.",ch);
           break;

       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
           printf("%c is SMALL LETTER VOWEL.",ch);
           break;

       default:
           printf("It is NOT VOWEL.");

    }
      
   return 0;

}

      
/*
Output: 
Character is :A  
It is CAPTITAL LETTER VOWEL.

Character is :u 
It is SMALL LETTER VOWEL.

Character is :B  
It is NOT VOWEL.
*/


   
   

 