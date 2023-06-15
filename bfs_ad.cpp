#include<bits/stdc++.h>
using namespace std;

class graphs{

    private:
        int v;
        vector<list<int>> adj;
    public:
        graphs(int v) {
            this->v=v;
            adj.resize(v);
        }

        void addedge(int u,int y)
        {
            adj[u].push_back(y);

        }

        void bfs(int s,int k)
        {
             bool bul[v];
             bul[v]*false;
             queue<int> que;
             bul[s]=true;
             que.push(s);
             int c=0;
             if(k>v )
                cout<<-1<<endl;



             while(!que.empty())
             {
                 int node=que.front();
                 cout<<node<<" "<<k<<endl;
                 que.pop();
               
                    
                 for(auto p : adj[node])
                 {
                    
                    if(!bul[p])
                        {
                            bul[p]=true;
                            que.push(p);

                        }
                 }
                   if(k==node)
                    cout<<c;
                c++;

             }



        }



};

int main () 
{
    graphs obj(4);
    obj.addedge(0,1);
    obj.addedge(0,2);
    obj.addedge(1,3);
    obj.addedge(2,4);
    obj.bfs(0,3);



}

