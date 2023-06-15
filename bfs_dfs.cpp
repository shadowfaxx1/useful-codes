#include<bits/stdc++.h>
using namespace std;

class graph{
    private: 
        vector<list<int>> adj;
        int v;
    public:
        graph(int v)
            {this->v=v;
             adj.resize(v);
                }
        void addedge(int u,int y)
        {
            adj[u].push_back(y);
        }
        void take_input()
        {
            int c,d;
            cin>>c>>d;
            while(c!=-1)
            {
                addedge(c,d);
                cin>>c>>d;
            }
        }

        void print()
        {
            for(int i =0;i<v;i++)
            {   
                cout<<i<< " -> ";
                for(auto j : adj[i])
                    cout<<j<<" ";
                cout<<endl;

            }
        }

        vector<int> bfs(int k)
        {
            vector<int> res;
            vector<bool> vis(v,false);
            queue<int> q;
            vis[k]=true;
            q.push(k);
            while(!q.empty())
                {
                    int n=q.front();
                    q.pop();
        //  if(n==NULL)
        //     {
        //         cout<<endl;
        //         if(!q.empty())
        //         {
        //             q.push(NULL);
        //         }
        //     }
                   res.push_back(n);
                    for(auto i :adj[n])
                        if(!vis[i])
                            {
                                vis[i]=true;
                                q.push(i);

                            }
                }
        return res;


        }
};

int main ()
{
    graph obj(7);
    obj.take_input();
    vector<int>vec=obj.bfs(2);
    for(auto i:vec)
        cout<<i<<" ";

    

}