#include<bits/stdc++.h>
using namespace std;

class node {
     public : 
        int data;
        node* left;
        node* right;

        node (int val){
            this->data=val;
            left=right=NULL;
        }
     
};

void bfs (node* root){
        queue<node*> q;
        q.push(root);
        q.push(NULL);
        

        while(!q.empty())
        {

            node* n=q.front();
            q.pop();
            if(n==NULL)
            {
                cout<<endl;
                if(!q.empty())
                {
                    q.push(NULL);

                }
            }

            else{  
                 cout<<n->data<<" ";
            if(n->left)
                q.push(n->left);
            if(n->right)
                q.push(n->right);


            }
                                 
        }
}


node* insert_bst(node* &root, int d)
{
    //base case
    if(root==NULL)
    {
        root=new node(d);
        return root;

    }

    if(d>root->data)
    {
        root->right=insert_bst(root->right,d);


    }
    if(d<root->data){
        root->left=insert_bst(root->left,d);

    }
        return root;


        
}
void take_input(node* &root)
{
     int d;
     cin>>d;

    while(d!=-1)
    {
        root=insert_bst(root,d);
        cin>>d;
    }
}




int main (){
        node* root=NULL;
        take_input(root);
        bfs(root);


}