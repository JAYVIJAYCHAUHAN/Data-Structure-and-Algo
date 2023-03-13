#include<stdio.h>
int main(){
    int bt[30],p[50],wt[80],tat[50],i,j,n,total=0,pos,temp;
     printf("\n\t\t\t*****Code for non-preemptive SJF Scheduling:******\n");
    float avg_wait, avg_tat;
    printf(" \nEnter the number of process  you want:");
    scanf("%d",&n);

      printf("\nEnter the Brust Time:\n");
      for(i=0;i<n;i++){
          printf("p%d:",i+1);
          scanf("%d",&bt[i]);
          p[i]=i+1;
      }
      // applying the sorting algorithms:
      for(i=0;i<n;i++){
          pos=i;
          for(j=i+1;j<n;j++){
              if(bt[j]<bt[pos])
              pos=j;
          }
          temp =bt[i];
          bt[i]=bt[pos];
          bt[pos]=temp;

          temp=p[i];
          p[i]=p[pos];
          p[pos]=temp;
      }
      wt[0]=0;
      for(i=1;i<n;i++){
          wt[i]=0;
          for(j=0;j<i;j++)
          wt[i]+=bt[j];
          total+=wt[i];
      }
      avg_wait=(float)total/n;
      total=0;
      printf("\nProcdess   Brust Time   Waiting Time    Turnaround Time");
      for(i=0;i<n;i++){
          tat[i]=bt[i]+wt[i];
          total+=tat[i];
          printf("\np%d\t\t %d\t\t  %d\t\t\t%d", p[i],bt[i],wt[i],tat[i]);
      }

   avg_tat=(float)total/n;
   printf("\n\navarage waiting time=%f",avg_wait);
   printf("\navaarage turnaround time=%f",avg_tat);
   return 0;
}