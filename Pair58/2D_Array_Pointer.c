#include<stdio.h>

int main(void)
{
    int arr[2][3]={10,20,30,40};

    printf("%d\n",&arr);                  //10222620
    //address of whole 2D array

    printf("%d\n",arr);                   //10222620
    //address of whole 1D array or 2D naw(1D address)

    printf("%d\n",&arr+1);                //10222644
    //2D  size ne ekda pudhe

    printf("%d\n",arr+1);                 //10222632
    //1D size ne ekda pudhe

    printf("%d\n",arr[0]);                //10222620
    //2D->0th 1D naw(element address) 

    printf("%d\n",arr[0]+1);              //10222624
    //element size ne ekda pudhe

    printf("%d\n",arr[1]);                //10222632
    //2D->1th 1D naw(element address)
    
    printf("%d\n",arr[1]+1);              //10222636
    //2D->1th 1D naw(element address ne ekda pudhe)
    
    printf("%d\n",arr[0][0]);             //10
    //2D->0th 1D->0th element naw(value)
   
    printf("%d\n",arr[0][0]+1);           //11
    //value+1
    
    printf("%d\n",arr[1][0]);             //40
    //2D->1th 1D->0th element naw(value)
    
    printf("%d\n",arr[1][0]+1);           //41
    //value+1
    
    printf("%d\n",&arr[0]);               //10222620
    //&(2D->0th 1D naw)
    
    printf("%d\n",&arr[0]+1);             //10222632
    //1D size  ne ekda pudhe
    
    printf("%d\n",&arr[1]);               //10222632
    //&(2D->1th 1D naw)
    
    printf("%d\n",&arr[1]+1);             //10222644
    //&(2D->1th 1D sized ne ekda pudhe)
    
    printf("%d\n",&arr[0][0]);            //10222620
    //&(2D->0th 1D->0th element naw)
    
    printf("%d\n",&arr[0][0]+1);          //10222624
    //2D->0th 1D->0th element cha size ne ekda pudhe
    
    printf("%d\n",&arr[1][0]);            //10222632
    //&(2D->1th 1D->0th element naw)
    
    printf("%d\n",&arr[1][0]+1);           //10222636
    //element size ne ekda pudhe 
    
    printf("%d\n",*arr);                  //10222620
    //arr cha first element or (2D)*->1D naw(element address)
    
    printf("%d\n",*arr+1);                //10222624
    //arr cha first element cha size ne ekda pudhe or 2D*
    
    printf("%d\n",**arr);                 //10
    //2D*->1D*->element naw (value)
    
    printf("%d\n",**arr+1);               //11
    //value+1
    
    printf("%d\n",&(*arr));               //10222620
    //&(2D naw*)
    
    printf("%d\n",&(*arr)+1);             //10222632
    //&(2Dnaw*->1D naw)) == 1D address
    
    printf("%d\n",&(**arr));              //10222620
    //&(2D*->1D*->element naw) == element address
    
    printf("%d\n",&(**arr)+1);            //10222624
    //element address ne pudhe 
    
    printf("%d\n",arr+1);                 //10222632
    //2D naw(1D address)
    
    printf("%d\n",*(arr+1));              //10222632
    //2D*->1st 1D naw(elemet address)
    
    printf("%d\n",*(arr+1)+2);            //10222640
    //2D*->1st 1D->2nd element address
   
    printf("%d\n",*(*(arr+1)+2));         //0
   //2D*->1st 1D*->2nd element naw(value)
   
    return 0;
}

/*

*(arr+1)
arrr+1
*(arr+1*(size of(datatype)))   //2D naw(1D address)
*(120+1*size of (1D))
*(120+1*12)
*(120+12)
*(132)                         //2D naw(1D address)
132                            //1D naw(element address)

*(arr+1)+2
132+2*(sizeof(datatype))       //1D naw(element address)
132+2*(sizeof(int)))
132+2*4
132+8
140

*(*(arr+1)+2)
*(140)
0


*/