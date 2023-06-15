#include<stdio.h>
#include<stdio.h>

int main(){

 int ar[5]={4,3,2,1,5};
int s ,i;
int n=5,j;

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
         if(ar[i]>ar[j]){
         int temp=ar[i];
         ar[i]=ar[j];
         ar[j]=temp;
         }

    }
}
  
 for(i=0;i<5;i++)
 printf(" %d ",ar[i]);



}
