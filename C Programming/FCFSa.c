#include<stdio.h>
#include<conio.h>
int main(){
     printf("\t\t\t\t\t*********************************************\n\n");

    int n,bt[100],wt[20], tat[80],avwat=0, avtat=0,i,j;
     
    printf("\t\t\t\t****This is the FCFS CPU SCHEDULING*******\n");

    printf("\n Please Enter the total number of the process");
    scanf("%d",&n);
    printf("\nEnter process Brust Time\n");
    for(i=0;i<n;i++){
        printf("p[%d]:",i+1);
        scanf("%d",&bt[i]);
        getch();
    }
    wt[0]=0;
    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        }
        printf("\n processBrust TimeWaiting TimeTurnaround Time");
        for(i=0;i<n;i++){
            tat[i]=bt[i]+wt[i];
            avwat+=wt[i];
            avtat+=tat[i];
            printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);

        
    }
    avwat/=i;
    avtat/=i;
    printf("\n\n\t\t\tAvarage waiting time:%d",avwat);
    printf("\n\t\t\t\t\tAvarage turnaround time %d:",avtat);
    printf("\t\t**************************** *\n\n");
    getch();
    return 0;
}