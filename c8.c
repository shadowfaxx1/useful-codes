#include<stdio.h>
#include<stdlib.h>
void recursive(int ar[],int a, int b );
void merge(int ar[],int i , int m ,int r);
void print(int ar[],int r);
int main()
{
     int ar[6]={4,1,6,5,3,2},r;
     r=sizeof(ar)/sizeof(ar[0]);
    recursive(ar,0,r-1);
    printf("sorted array");

    print(ar,r);



}
void recursive(int ar[],int i, int r )

{    
    if(i<r)
    {
    int m;
     if(r%2==0)
      m=(r+i)/2;
     
      else
      m=(r+i+1)/2;

     recursive(ar,i,m);
     recursive(ar,m+1,r);
     merge(ar,i,m,r);

    }
   

}

void merge(int ar[],int i , int m ,int r){
        
        int l,j,k;
         int n1=m-i+1;
         int n2=r-m;
        int L[n1],R[n2];
        for(l=0;l<n1;l++)
        {
            L[l]=ar[i+l];

        }
        for(j=0;j<n2;j++)
        {
            R[j]=ar[j+1+m];

        }
        l=0;
        j=0;
        k=1;

        while(l<n1&&j<n2)
        {

            if(L[l]<=R[j])
            {
              ar[k]=L[l];
              l++;

            }
            else{
                ar[k]=R[j];
                j++;
            }
       
            k++;
        }
            while(l<n1)
            {
                ar[k]=L[l];
                i++;
                k++;

            }
            while(j<n2)
            {
             ar[k]=R[j];
             j++;
             k++;

            }

}

void print(int ar[],int r)
{   int i;

    for( i=0;i<r;i++)
    {
        printf("%d",ar[i]);

    }

}
   
  


