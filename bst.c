#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *left;
  struct node *right;

};
struct node *insertion(struct node *root,int d);
struct node *create(int d );
void inorder(struct node *root);
void preorder(struct node *root);
void postorder(struct node *root);
struct node *find(struct node *root,int x  );


int main(){
   struct node *root=NULL;
   int d ,x;
   while(1){
        
       printf("enter the data");
       scanf("%d",&d);
       if(d!=-99)
       {

        root=insertion(root,d);

       }
      
       else
       break;
       
       
   }
       struct node *Cur;
      printf("enter the number to find");
      scanf("%d",&x);
         if(x!=-99)
         {
           Cur=find(root,x)
         if(Cur->data!=x)
         printf("not found");
         else
         printf("found %d = = %d ",Cur->data,x);
         }
         


   inorder(root);
   printf("preorder\n");
     preorder(root);
   printf("postorder\n");

     postorder(root);

}
struct node *insertion(struct node *root,int d){
    
     if(root==NULL)
      return create(d);
     
     if(d<root->data)
     root->left=insertion(root->left,d);
     else
     root->right=insertion(root->right,d);

   return root;

}
struct node *create(int d )
{
  struct node *temp=malloc(sizeof(struct node));
   temp->data=d;
   temp->right=NULL;
   temp->left=NULL;
   return temp;

}
void inorder(struct node *root)
{
  if(root!=NULL) {

  inorder(root->left);
  printf(" %d-> ",root->data);
  inorder(root->right);
  }
}


void preorder(struct node *root){

   if(root!=NULL)
   {
     
printf(" %d-> ",root->data);
     preorder(root->left);
     preorder(root->right);
     

   }
}
void postorder(struct node *root){

   if(root!=NULL)
   {
     
     preorder(root->left);
     preorder(root->right);
printf(" %d-> ",root->data);
     

   }
}

struct node *find(struct node *root,int x ){
  
  struct node *cur,*par;
  
  cur=root;
  if(x==root->data)
    return root;
  else if(x<root->data)
      return root=find(root->left,x);
  
  else if(x>root->data)
      return root=find(root->right,x);
   
  }