#include<stdio.h>


int main()
{
  int ino= 10;
  char ch='A';
  float fno=86.60f;
  double dno=72.60;
  unsigned int ino1=30;
 
 // printf("%c",ino);            //NO OUTPUT    
    printf("\n%c",ch);           // A  
 // printf("\n%c",fno);          //NO OUTPUT    
 // printf("\n%c",dno);          //NO OUTPUT
 // printf("\n%c",ino1);         //NO OUTPUT

  printf("\n\n%i",ino);         //10            
  printf("\n%i",ch);            //65                               
  printf("\n%i",ino1);          //30

  printf("\n\n%d",ino);        //10            
  printf("\n%d",ch);           //65              
  printf("\n%d",ino1);         //30

  printf("\n\n%o",ino);        //12            
  printf("\n%o",ch);           //101                      
  printf("\n%o",ino1);         //36

  printf("\n\n%u",ino);        //10           
  printf("\n%u",ch);           //65                      
  printf("\n%u",ino1);         //30

  printf("\n\n%x",ino);        //a           
  printf("\n%x",ch);           //41                         
  printf("\n%x",ino1);         //1e

  printf("\n\n%ld",ino);       //10           
  printf("\n%ld",ch);          //65                      
  printf("\n%ld",ino1);        //30

  printf("\n\n%hd",ino);       //10             
  printf("\n%hd",ch);          //65           
  printf("\n%hd",fno);         //0            
  printf("\n%hd",dno);         //26214            
  printf("\n%hd",ino1);        //30

  printf("\n\n%lu",ino);       //10           
  printf("\n%lu",ch);          //65                      
  printf("\n%lu",ino1);        //30

  printf("\n\n%hu",ino);       //10            
  printf("\n%hu",ch);          //65                    
  printf("\n%hu",ino1);        //30

  printf("\n\n%f",ino);       //8589926400.000010            
  printf("\n%f",ch);          //8589926400.000062           
  printf("\n%f",fno);         //86.59998            
  printf("\n%f",dno);         //72.60000         
  printf("\n%f",ino1);        //8589926400.000029

  printf("\n\n%e",ino);       //8.589926e+009          
  printf("\n%e",ch);          //8.589926e+009          
  printf("\n%e",fno);         //8.660000e+001            
  printf("\n%e",dno);         //7.260000e+001           
  printf("\n%e",ino1);        //8.589926e+009

  printf("\n\n%E",ino);       //8.589926E+009            
  printf("\n%E",ch);          //8.589926E+009           
  printf("\n%E",fno);         //8.589926E+001           
  printf("\n%E",dno);         //7.260000E+001          
  printf("\n%E",ino1);        //8.589926E+009

  printf("\n\n%g",ino);       //8.58993e+009         
  printf("\n%g",ch);          //8.58993e+009        
  printf("\n%g",fno);         //86.6          
  printf("\n%g",dno);         //72.6         
  printf("\n%g",ino1);        //8.58993e+009


  printf("\n\n%G",ino);        //8.58993E+009         
  printf("\n%G",ch);           //8.58993E+009     
  printf("\n%G",fno);          //86.6  
  printf("\n%G",dno);          //72.6
  printf("\n%G",ino1);         //8.58993E+009
 

  printf("\n\n%lf",ino);       //8589926400.000010            
  printf("\n%lf",ch);          ///8589926400.000062         
  printf("\n%lf",fno);         //86.599998           
  printf("\n%lf",dno);         //72.60000         
  printf("\n%lf",ino1);        ///8589926400.000029
  
  printf("\n\n%S",ino);        //segmenation Fault        
  printf("\n%S",ch);           //segmenation Fault           
  printf("\n%S",fno);          //segmenation Fault            
  printf("\n%S",dno);          //segmenation Fault           
  printf("\n%S",ino1);         //segmenation Fault 
  

  printf("\n\n%p",ino);       //0000000A            
  printf("\n%p",ch);          //00000041         
  printf("\n%p",fno);         //60000000          
  printf("\n%p",dno);         //66666666          
  printf("\n%p",ino1);        //00000001E


  return 0;

}