#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main(){
    int*p,n;
    printf("enter the number: ");
    scanf("\nthe number%d",&n);
    printf("entered the number is %d\n",n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){    
        printf("memory is not allocated in the ram");
exit(0);
    }
    else {
    
        printf("memory is allocated successfully");
        for(int i=0;i<n;++i)
{
    p[i]=i+1;
}   
printf("the array element is :");
for(int i=0;i<n;++i){
printf("%d",n);
} 
    }
    return 0;

}