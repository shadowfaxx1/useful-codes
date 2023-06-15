#include<stdio.h>
#include<stdlib.h>

int main()
{
   int ar[10]={1,2,3,5,4,7,10,54,24,21};
   int i;
   int max=ar[0];
   for(i=0;i<sizeof(ar)/sizeof(int);i++)
   {
        for(int j=0;j<sizeof(ar)/sizeof(int);j++)
      {
       if(ar[i]<ar[j])
       { 
           
             int temp =ar[i];
             ar[i]=ar[j];
             ar[j]=temp;

       }
}

   }
       for(i=0;i<sizeof(ar)/sizeof(int);i++)
       {
           printf("%d\n",ar[i]);
           
       }  



//binary search

int e,s,m;
int cou=ar[3];

e=sizeof(ar)/sizeof(int);
s=0;
printf("\n\n");


while(s<=e)
{            
             
         m=(s+e);
          if(m%2==0)
          m=m/2;
          else
          m=(m+1)/2;

          printf("%d\n",m);


        if(ar[m]==cou)
        {
            printf("found at %d",m);
            break;


        }
        
        if(cou>ar[m])
               s=m;
           
        if(cou<ar[m])
          e=m;
       
}

}