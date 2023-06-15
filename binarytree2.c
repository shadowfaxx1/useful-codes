#include<stdio.h>
#include<stdlib.h>

typedef struct node{
     int data;
     struct node *left;
     struct node *right;

}node;
void print(struct node *root);
void print3(struct node *root);
void print2(struct node *root);
void newnode(node *root);

int main(){
     
      node *root=malloc(sizeof(node));
      newnode(root);

      printf("\n");
      print(root);
      printf("\n");
      print2(root);
      printf("\n");
      print3(root);

      

}

void newnode(node *root){
    int x,ch,c;
    printf("enter the data ");
   
    printf("do you want another data ?");
    scanf("%d",&ch);
    if(ch==1){
      
        printf("press[1] for left and press[2] for right\n");
        scanf("%d",&c);
        if(c==1)
        {
            root->left=newnode(root->left);
             scanf("%d",&root->data);
        }
        else if(c==2)
        {
            root->right=newnode(root->right);

        }


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