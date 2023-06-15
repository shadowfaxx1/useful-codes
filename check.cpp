#include<bits/stdc++.h>
using namespace std;

int main()
{
     int ar[] = { 1, 1, 2, 1, 1, 3, 4, 3 };
    int n = sizeof(ar) / sizeof(ar[0]);
     int map[10][10];
     for(int i=0;i<n;i++)
     {
        map[ar[i]]++;
     }
     for(int ii=0;ii<10;ii++)
     {
        for(int j=0;j<10;j++)
        {
            cout<<map[ii][j];

        }
        cout<<endl;

     }
     



}