#include<bits/stdc++.h>

using namespace std;

int main ()
{   
    int t,n,i,n2,j;

    cin>>t;
    while(t--){
        cin>>n;
        i=1;
        int ar[n]={0};
        while(i<=n){
            cin>>ar[i];
            i++;
        }
        cin>>n2;
        int take[n2][2]={{0,0}};
        for(i=1;i<=n2;i++){
            for( j=1;j<=2;j++)
            {
                cin>>take[i][j];

            }
        }
        
        for(i=1;i<=n2;i++)
        {
           for(j=1;j<=n;j++)
           {
           }
            cout<<(ar[take[i][1]] | ar[take[i][2]]);
            cout<<endl;

                
        }


        }
    }

//  for(i=0;i<n;i++)
//     {
//         cout<<" "<<ar[i];
        
//     }
//      cout<<endl;
//     for(i=0;i<n2;i++){
//         for(j=0;j<2;j++)
//         {
//             cout<<take[i][j];

//         }
//         cout<<endl;


//     }
        
//     }
