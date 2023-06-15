#include<bits/stdc++.h>
using namespace std;

class graphs{
    private:
        int v;
        vector<list<int>> adj;
    public:
        graphs(int v){
            this->v=v;
            adj.resize(v);
        }

        void addEdge(int u,int y){

            adj[u].push_back(y);

        }

        vector<int> bfs(int s)
        {
            queue<int> que;
            vector<bool> bul(v,false);
            vector<int> vec;

            bul[s]=true;
            que.push(s);

            while(!que.empty())
            {
                s=que.front();
                que.pop();
                vec.push_back(s);

                for(auto p : adj[s])
                {
                    if(!bul[p]){
                        bul[p]=true;
                        que.push(p);

                    }
                }

            }
            return vec;

        }
     vector<int> bfs_dis(){
         vector<int> bfs;
         vector<bool> bul(v,false);
         for(int i=0;i<v;++i){

            if(!bul[i])
            {
                queue<int> que;
                bul[i]=true;
                que.push(i);

                while(!que.empty())
                {
                    int n =que.front();
                    que.pop();
                    bfs.push_back(n);
                    for(auto p : adj[n])
                        {
                            if(!bul[p])
                            {
                                bul[p]=true;
                                que.push(p);

                            }
                        }
                }

            }




         }
         return bfs;

     }

};

int main()
{
    graphs  g(8);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1,4);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.addEdge(4,5);
    g.addEdge(6,7);



    vector<int> vec=g.bfs_dis();
    for(auto p : vec)
    cout<<p<<" ";


 
}
