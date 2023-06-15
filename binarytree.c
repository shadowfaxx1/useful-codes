#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node *left;
    struct node *right;

};
struct node* newnode(int d);
void print(struct node *root);
void print3(struct node *root);
void print2(struct node *root);
int height(struct node *root);


int main(){
     
     int x ,d;
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->right->left=newnode(4);
    root->right->right=newnode(5);
    root->right->left->left = newnode(21);
    root->right->right->right=newnode(89);
    root->right->right->right->left=newnode(23);


     
     print(root);
     printf("\n");
     print3(root);
     printf("\n");
     print2(root);


   printf("height of the tree= %d",height(root));
   

    

        
}

struct node* newnode(int d){

     
      struct node *temp=malloc(sizeof(struct node));

      temp->data=d;
      temp->right=NULL;
      temp->left=NULL;
      return temp;

}
     
void print(struct node *root){
   

if(root!=NULL){
     print(root->left);
     printf(" %d ",root->data);
     print(root->right);
}
}
void print3(struct node *root)
{


 if(root!=NULL){
    
     printf(" %d ",root->data);
     print(root->left);
     print(root->right);
}
}
void print2(struct node* root)
{
if(root!=NULL){
     print(root->left);
     print(root->right);
     printf(" %d ",root->data);
  
}
}

int height(struct node *root){

     if(root==NULL)
      return -1;

     int depth=height(root->left);
     int depth2=height(root->right);

     if(depth>depth2)
     {
          return depth+1;

     }
     else{
          return depth2+1;

     }
}