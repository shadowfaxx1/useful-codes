
    
    



#include<bits/stdc++.h>
using namespace std;

class graphs{
    private:
        int v ;
        
         vector<int> adj[7];

    public:
       graphs(int v){
        this->v=v;

       }
       void addedge(int u, int y)
       {
        adj[u].push_back(y);
        adj[y].push_back(u);

       }

       void prints()
       {
        for(int i=0; i<v;++i)
        {
            cout<<"\n here is the list for "<<i<<endl;
            for(auto p:adj[i])
              cout<<p<<" ";
            cout<<endl;
            
        }
       }
};
int main () {
    int v=7;
    graphs obj(v);
    obj.addedge(0,1);
    obj.addedge(1,3);
   obj.addedge(1,2);
    obj.addedge(2,4);
   obj.addedge(3,5);
 obj.addedge(3,6);
    obj.prints();
    return 0;
     
}