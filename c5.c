#include<stdio.h>
#include<stdlib.h>

int main()
{
   int ar[5]={4,3,2,1,5};
    int min=ar[0];
    int n=5;
    int i ;
int j ;
int m;
   for(i=0;i<n;)
   {
      m=i;

       for( j=i+1;j<n;j++)
           if(ar[j]<ar[m]){
             m=j;
      int temp=ar[m];
      ar[m]=ar[i];
      ar[i]=temp;
          i++;
           
       }
    



   }
   for(i=0;i<5;i++)
 printf(" %d ",ar[i]);

 printf("%d",min);
 

 

}
