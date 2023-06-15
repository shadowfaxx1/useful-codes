#include <stdio.h>
int ar2[3];
void insert();
int main(void) {
	
	 int i ,qua;
	 scanf("%d",&qua);
	 for(i=0;i<qua;i++)
	 {
	     insert();
	     
	 }
	 for(i=0;i<qua;i++)
	 {
	     printf("%d",ar2[i]);
	 }
	
	
	return 0;
}

void insert(){
     int ar[3];
     
     for(int i=0;i<3;i++)
     {
         scanf("%d",ar[i]);
         
     }
     int max=ar[0];
     int max2;
     
     for(i=0;i<3;i++)
     {
         if(max<ar[i])
          max=ar[i];
          max2=max;
       
     }
     ar2[z]=max2;
     int z++;
     
     
}