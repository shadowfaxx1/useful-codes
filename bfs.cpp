#include<bits/stdc++.h>
using namespace std;
class graphs{
    private:
        int v;
        vector<list<int>> adj;
    public:
        graphs(int v)
        {
            this->v=v;
            adj.resize(v);
        }
        void addedge(int u,int y){
            adj[u].push_back(y);
        }
        void print()
        {
            for(int i=0;i<v;++i)
            {
                cout<<"\n adjancey list for "<<i<<endl;
                for(auto p:adj[i])
                   cout<<p<<" ";
                cout<<endl;
            }
        }
        void bfs()
        {
            int k=0;
            queue<int> que;
            bool bul[v];
            bul[v]*false;
            bul[k]=true;
            que.push(k);
        while(!que.empty())
        {
           k=que.front();
           cout<<k<<" ";
           que.pop();

           for(auto ad:adj[k])
           {
              if(!bul[ad]){
                bul[ad]=true;
                que.push(ad);
              } 
           }
        }
    }
};
int main()
{
    graphs adj(6);
    adj.addedge(0,1);
    adj.addedge(0,2);
    adj.addedge(1,2);
    adj.addedge(2,0);
    adj.addedge(2,3);
    adj.addedge(3,3);
    
    adj.print();
    adj.bfs();

}