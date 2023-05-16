#include<stdio.h>
#define max 20
int main()
{
    int reference_str[]={7,0,1,2,0,3,0,4,2,3,0};
    int frame_no[3];
    int i,j,PF=0,PH=0,x=0;

    for(i=0 ;i<3;i++)
    {
        //printf("%d",frame_no[i]);
        frame_no[i] =-1;
    }


    for(i=0 ; i<11 ;i++)
    {
        for(j=0 ; j<3 ;j++)
        {
            if(frame_no[i]==reference_str[i]){
                PH++;
                break;
            }

            else if(j==2){
                PF++ ;
                frame_no[x] = reference_str[i];
                x++;
                x = x%3;
            }
        }
    }

    printf("Total Page Fault :%d ",PF);
    printf("\nTotal Page Hit :%d ",PH);

    //float avg_TAT = (float)TAT_sum/4.0;
    float PFR = (PF* 100.0)/11;
    float PHR = (PH* 100.0)/11;

   // PHR = (PF/11) * 100;   
    printf("\nTotal Page Fault Ratio :%.2f ",PFR);
    printf("\nTotal Page Hit Ratio :%.2f ",PHR);
    //printf("\n%d ",PH);
    return 0;
}