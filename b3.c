#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data ;
    struct node *left;
    struct node*right;

}node;

void print(struct node *root);
void print3(struct node *root);
void print2(struct node *root);
void newnode(node *root);

int main(){
       
        node *root=malloc(sizeof(node));
        newnode(root);
        printf("\n");

    printf("printing binary tree\n");
    printf("\ninorde\n");
    print(root);
    printf("\npreorder\n");
    print2(root);
    printf("\npostorder\n");
    print3(root);

}
void newnode(node *root){
    int d,p ;

     printf("enter the data ");
    scanf("%d",&root->data);
    
     printf("enter the path");
     scanf("%d",&p);
     if (p==1)
     {
          root->left=malloc(sizeof(node));
          root->right=NULL;
         newnode(root->left);
        
          

     }
     else if(p==2){
         root->right=malloc(sizeof(node));
          root->left=NULL;
         newnode(root->right);
         
     }
    else  { 
        root->left=NULL;
        root->right=NULL;

    }

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
void height(struct node *root){

     struct node *temp;
     
     
}