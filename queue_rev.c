#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    int priority;
    struct node* link;


};


struct node newnode(struct node *node , int p , int d )
{
    struct node
}

void insert(struct node* node)
{   int priority , data ;

    printf("enter the priority \n");
    scanf("%d",&priority);
    printf("enter the data \n");
    scanf("%d",&data);

    if(node==NULL){
        newnode(node,priority,data);
    }
    else{
            

    }

    


}

int main ()
{
    struct node* node=NULL;
    while(1)
    {

     insert(node);

    }

}