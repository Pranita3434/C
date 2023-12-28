#include<stdio.h>
enum COMBINATION (series=1,parallel=2);
enum SWITCH (OFF,ON);

int main(void)
{
    enum COMBINATION ckt;
    enum SWITCH S1,S2;
  
    pritnf("Which circuit you want?(series=1,parallel=2)");
    scnatf("%d",&ckt);
    
    printf("Enter Two Switches?(OFF=0,ON=1);
    scanf("%d%d",&S1,&S2);

    if(ckt = series)
    {
        if(S1 == ON && S2 == ON)
                 pritnf("Bulb Will Glow");
        else
                 pritnf("Bulb will Not Glow");
    }
    return 0;
}



    