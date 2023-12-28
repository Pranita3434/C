#include<stdio.h>

int main(void)
{
    int arr[3][2][4]={10,20,30,40,50,60,70,80,90};

    
    printf("%d\n",arr[0]);                             //10681608
    printf("%d\n",arr[0][0]);                          //10681608
    printf("%d\n\n",arr[0][0][0]);                     //10
   
    printf("%d\n",arr[1]);                             //10681640
    printf("%d\n",arr[1][0]);                          //10681640
    printf("%d\n\n",arr[1][0][0]);                     //90

    printf("%d\n",arr[2]);                             //10681672
    printf("%d\n",arr[2][0]);                          //10681672
    printf("%d\n\n\n",arr[2][0][0]);                   //0

 
    printf("%d\n",arr[0]+1);                            //10681624
    printf("%d\n",arr[0][0]+1);                         //10681612
    printf("%d\n\n",arr[0][0][0]+1);                    //11

    printf("%d\n",arr[1]+1);                            //10681656
    printf("%d\n",arr[1][0]+1);                         //10681644
    printf("%d\n\n",arr[1][0][0]+1);                    //91

    printf("%d\n",arr[2]+1);                            //10681688
    printf("%d\n",arr[2][0]+1);                         //10681676
    printf("%d\n\n\n",arr[2][0][0]+1);                  //1



    printf("%d\n",&arr[0]);                             //10681608
    printf("%d\n",&arr[0][0]);                          //10681608
    printf("%d\n\n",&arr[0][0][0]);                     //10681608

    printf("%d\n",&arr[1]);                             //10681640
    printf("%d\n",&arr[1][0]);                          //10681640
    printf("%d\n\n",&arr[1][0][0]);                     //10681640

    printf("%d\n",&arr[2]);                             //10681672
    printf("%d\n",&arr[2][0]);                          //10681672
    printf("%d\n\n",&arr[2][0][0]);                     //10681672


    printf("%d\n",&arr[0]+1);                           //10681640
    printf("%d\n",&arr[0][0]+1);                        //10681624
    printf("%d\n\n",&arr[0][0][0]+1);                   //10681612
   
    printf("%d\n",&arr[1]+1);                           //10681672
    printf("%d\n",&arr[1][0]+1);                        //10681656
    printf("%d\n\n",&arr[1][0][0]+1);                   //10681644

    printf("%d\n",&arr[2]+1);                           //10681604
    printf("%d\n",&arr[2][0]+1);                        //10681688
    printf("%d\n\n\n",&arr[2][0][0]+1);                 //10681676

    printf("%d\n",&arr);                                //10681608
    printf("%d\n",arr);                                 //10681608
    printf("%d\n",&arr+1);                              //10681604
    printf("%d\n\n",arr+1);                             //10681640

    
    printf("%d\n",*arr);                                //10681608
    printf("%d\n",**arr);                               //10681608
    printf("%d\n",***arr);                              //10
    printf("%d\n",**arr+1);                             //10681612
    printf("%d\n\n",***arr+1);                          //11
 
    printf("%d\n",&(*arr));                             //10681608
    printf("%d\n",&(*arr)+1);                           //10681640
    printf("%d\n",&(**arr));                            //10681608
    printf("%d\n\n",&(**arr)+1);                        //10681624

    printf("%d\n",arr+1);                               //10681640
    printf("%d\n",*(arr+1));                            //10681640
    printf("%d\n",*(arr+1)+2);                          //10681672
    printf("%d\n",*(*(arr+1)+2));                       //10681672

    return 0;
}
