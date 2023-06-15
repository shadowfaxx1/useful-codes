#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	
	int t,n,i,j;
	cin>>t;
	while(t--){
	    cin>>n;
	    int c=0;
	    int ar[n];
	    for(i=0;i<n;i++){
	        cin>>ar[i];
	        
	    }
	    sort(ar,ar+n);
	
	    
	    for(i=0;i<n;i++){
	        for(j=i+1;j<n;j++)
	        {
	            if(ar[i]+ar[j]>=ar[i]*ar[j]){
	                c=c+1;

	            }
	            
	            else
	            break;
	            
	          	            
	           
	           
	           
	        }
	    
	        
	        
	    }
	    cout<<c<<endl;

	    
	}
	
	return 0;
}


// # cook your dish here
// t=int(input())
// while(t):
//     x=int(input())
//     li=list(map(int,input().split()[:x]))
//     c=0
//     for i in range(len(li)):
//         for j in range(i+1,len(li)):
//             if((li[i]+li[j])>=(li[i]*li[j])):
//                 c=c+1
            

//     print(c)            
                
    
    
    
    
    
    
    
    
    
    
    
    t-=1