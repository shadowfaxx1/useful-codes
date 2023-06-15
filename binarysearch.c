#include<stdio.h>
#include<stdlib.h>
#define n 10

int main(){

    int i,j;
    
    int ar[n]={12,3,1,5,2,7,35,6,8,23};

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
          if(ar[j]<ar[i])
          {
           int temp;
           temp=ar[i];
           ar[i]=ar[j];
           ar[j]=temp;
          }
        }
        
    }

    printf("Enter the key element to search \n");
    int x;
    scanf("%d",&x);
      int p=n;

     int l=bin(ar[],n,x);
     printf("found at %d ")
  int l,h,m;
    l=ar[0];
    h=ar[p];
    
    while(l<=h){
     int m=(l+h)/2;

        if(ar[m]==x)
         printf("found at index %d ",m);
         
        else if(ar[m]>x)
        {
            h=m-1;
        }
        else if(ar[m]<x)
        l=m+1;
        else 
        printf("not found ");
        
        
        
    }

}

