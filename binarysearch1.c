#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
    printf("sorted list of elements ");

    for(i=0;i<n;i++){
      printf(" %d ",ar[i]);
    }
     

    printf("Enter the key element to search \n");
    int x;
    scanf("%d",&x);
      int p=n;

  int l,h,m;
    l=0;
    h=n;
    
    while(l<=h){

     int m=floor((l+h)/2);

        if(ar[m]==x){
         printf("found element at index %d i.e %d ",m,ar[m]);
         break;
        }
         
        else if(ar[m]>x)
        {
            h=m-1;
        }
        else if(ar[m]<x)
        l=m+1;
        else {
        printf("not found ");
        break;
        }
        
        
        
    }

}

