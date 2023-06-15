#include<iostream>
using namespace std ;

int main(){

      int n=10,i,j,x,m,l,h;

     int ar[n]={2,5,9,1,3,4,8,43,22,19};

      for(i=0;i<n;i++){
          for(j=i+1;j<n;j++)
          {
              if(ar[i]>ar[j])
              {
                  int temp=ar[i];
                  ar[i]=ar[j];
                   ar[j]=temp;

              }
          }
 
      }
     
     for(i=0;i<n;i++)
           cout<< " "<<ar[i]<<" ";
       l=0;
       h=n;    
       x=5;    
     while(l<=h)
           {
                m=(int)(l+h)/2;
                   cout<<m;
               if(ar[m]==x)
                {
                   cout<<"found at index "<<ar[m];
                   break;
                
                }
              if(ar[m]>x)
              h=m-1;

              if(ar[m]<x)
              l=m+ 1;

              else{
                  cout<<"not found ";
                  break;

              }


           }

}