#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node* link;
};

struct node* head=NULL;

struct node* append(struct node*);
struct node* display(struct node*);
//////////////////////////////////////////////
int main(){
    int ch;
    while (1)
    {
        printf("enter your choice \n");
        printf("1. for append \n");
        printf("3. quit\n");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1: head=append(head);
            break;

        case 2: head=display(head);
        break;
        
        case 3:exit(0);
        default:
        printf("wrong input\n ");
            break;
        }

    }
return 0;
}

/////////////////////////////////////////////

struct node*append(struct node* head)
{
        struct node* p;
        p=(struct node*)malloc(sizeof(struct node*));
        printf("enter data ");
        scanf("%d",&p->data);
      //  p->link=NULL;

    if(head==NULL)
    {
        printf("stack empty \n");
        head=p;
    }

    else{
        struct node*q=head;
        while (q->link!=NULL)
        {
            q=q->link;
        }
        q->link=p;
        p->link=NULL;
    }
return head;
}

struct node* display(struct node* head)
{
    struct node*temp=head;
    while (temp!=NULL)
    {
        printf("%d is element \n ",temp->data);
        temp=temp->link;
    }
    return head;
}