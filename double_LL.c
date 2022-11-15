#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main(){
    
return 0;
}

struct node *insert(struct node* head)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n ENTER DATA \n");
    scanf("%d",&temp->data);
    return head;
}