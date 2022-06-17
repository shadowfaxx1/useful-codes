#include<bits/stdc++.h>
using namespace std;
#define sent 9999999
void restore_up(int ar[],int i)
{
    int k=ar[i];
    int par=i/2;
    while(ar[par]<k)
    {
        ar[i]=ar[par];
        i=par;
        par=i/2;

    }
    ar[i]=k;

}
void restore_down(int ar[], int i,int n )
{
    int k=ar[i];
    int left=2*i;
    int right=2*i+1;
    while(i<=right)
    {
        if(k>=ar[left] && k>=ar[right])
        {
            ar[i]=k;
            return;

        }
        if(ar[left]>ar[right])
        {
            ar[i]=ar[left];
            i=left;

        }
        else{
            ar[i]=ar[right];
            i=right;

        }

        left=2*i;
        right=2*i+1;


    }
    if(left==n && k<ar[left] )
    {
        ar[i]=ar[left];
        i=left;
    }
    ar[i]=k;

}

void buildheap_down(int ar[], int n)
{
    for(int i=2;i<=n;i++)
    {
        restore_up(ar,i);

    }
}

int restore_up(int ar[],int n){
    for(i=n/2;)
}
int main (){
    
    int ar[]={sent,93,11,50,1,67,88,82,97,15,76,17,86};
    int n=sizeof(ar)/sizeof(ar[0]);
    
    for(int i=1;i<n;i++)
    cout<<" "<<ar[i];
    buildheap_down(ar,n);
     cout<<endl;

    // heap_sort_down(ar,n);
   for(int i=1;i<n;i++)
    cout<<" "<<ar[i];

}