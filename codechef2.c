#include <stdio.h>
#include <limits.h>
int ar2[3];
int z=0;

void insert( );
int main(void) {
	
	 int i ,qua;
	 scanf("%d",&qua);
	 for(i=0;i<qua;i++)
	 {
	     insert();
	     
	 }
	 for(i=0;i<z;i++)
	 {
	     printf("%d\n",ar2[i]);
	 }
	
	

}

void insert( ){
    int n =3;
     int ar[n];
     int i;
     for(i=0;i<n;i++)
     {
         scanf("%d",&ar[i]);
         
     }
 
     int max,max2;
     max=max2=INT_MIN;
     
    
     for(i=0;i<n;i++)
     {
         if(max<ar[i])
         {
          max2=max;
          max=ar[i];
         
         }
         else if(ar[i] > max2 && ar[i] < max)
      {
        max2=ar[i];
        }
    

     }
    
       ar2[z++]=max2;
     
     
     
}