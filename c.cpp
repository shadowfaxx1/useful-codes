#include<iostream>
using namespace std;
int print(int x);
void printx();
void ok();

int main()
{
    int x ;

    cout<<"program to print out the cube\n";
    cout<<"do you want to input the value";
    cin>>x;
    cout<<"factorial of "<<   x  <<" is "<<print(x);
    cout<<"\n";
    printx();
    ok();



}

int print(int x)
{
    if(x==1)
      return 1;

    else
    return x*print(x-1);
}

void printx()
{

    int i , j ;
    for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*";

        }

        for(j=0;j<10-i;j++)
        {
            cout<<"*";

        }
        for(j=0;j<i;j++)
        {
            cout<<" "<<(char)(96+i)<<" ";

        }

         for(j=0;j<2*i+1;j++)
         {
             cout<<"*";

         }
         cout<<"\n";

    }
     for(i=10;i>=0;i--){


    for(j=i;j>0;j--)
        {
            cout<<"*";

        }

        for(j=10-i;j>0;j--)
        {
            cout<<"*";

        }
        for(j=i;j>0;j--)
        {
            cout<<" k ";

        }

         for(j=2*i+1;j>0;j--)
         {
             cout<<"*";

         }
 cout<<"\n";

    }

}

void ok(){

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

          
          
}