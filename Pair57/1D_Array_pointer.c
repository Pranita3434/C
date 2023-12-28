#include<stdio.h>

int main(void)
{
    int arr[ ]={10,20,30,40,50};

    printf("%d\n",&arr);              //15727924
    //address of whole 1D array

    printf("%d\n",arr);               //15727924
    //arr cha philaya element cha address

    printf("%d\n",arr[0]);            //10
    //arr cha philaya element ch nav   

    printf("%d\n",&arr+1);            //15727944
    //whole arr address ne ekda pudhe
   
    printf("%d\n",arr+1);             //15727928
    //element address ne ekda pudhe 
    
    printf("%d\n",arr[0]+1);          //11
    //value+1

    printf("%d\n",*arr);              //10
    //1D*->element ch nav(value)

    printf("%d\n",*arr+1);            //11
    //value+1

    printf("%d\n",*(arr+1));          //20
    //solving
 
    printf("%d\n",arr[2]);            //30
    //1D cha 2nd element ch naw(value)

    printf("%d\n",arr[2]+1);          //31
    //value+1

    printf("%d\n",&arr[2]);           //15727932
    //&(1D->2nd element ch naw)

    printf("%d\n",&arr[2]+1);         //15727936
    //32+1*sizeof(int),element size ne pudhe
    
    printf("%d\n",arr+2);             //15727932
    //element size ne 2da pudhe
    
    printf("%d\n",*(arr+2));          //30
    //solving
    return 0;
}

/*

*(arr+1)
*(124+1*(sizeof(datatype)))
*(124+1*sizeof(int))        //1D naw(element address)
*(124+1*4)
*(124+4)
*(128)                      //1D naw(element address)
20                          //element naw(value)

*(arr+2)
*(124+2*(sizeof(datatype)))
*(124+2*(sizeof(int)))      //1D naw(element address)
*(124+2*4) 
*(124+8)  
*(132))                    //1D naw(element address)
30                         //element naw(value)

*/






