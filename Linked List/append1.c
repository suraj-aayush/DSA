#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    struct node* left;
    int data;
    struct node *right;
};

struct node *head=NULL;

struct node *append(struct node* head);
struct node *display(struct node *head);

int main(){
    
return 0;
}

struct node *append(struct node* head)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n ENTER DATA ---> ");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(head==NULL)
    {
        head=temp;
    }

    else
    {
        
    }

}