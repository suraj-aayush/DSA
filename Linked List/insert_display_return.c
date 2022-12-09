#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node *head=NULL;

struct node *append(struct node*);
struct node *display(struct node*);
int length(struct node*);

int main(){
    int ch,x;
    while (1)
    {
        printf("enter your choice \n");
        printf("1. for append \n");
        printf("2. for display \n");
        printf("3. for length \n");
        printf("4. quit\n");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1:head = append(head);
            break;

        case 2: head=display(head);
            break;

        case 3: x=length(head);
        printf("%d is length \n\n ",x);
        break;

        case 4:exit(0);
        default:
        printf("wrong input\n ");
            break;
        }

    } 
return 0;
}


struct node *append(struct node *head)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("ENTER DATA TO ENTER \n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if (head==NULL)
    {
        head=temp;
        temp->link=NULL;
    }
    else
    {
        struct node*p=head;
        while (p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
        temp->link=NULL;     
    }
    return head;
}

struct node* display(struct node*head)
{
    struct node* temp;
    temp=head;
    if (temp==NULL)
    {
        printf("NO NODES TO DISPLAY \n");
    }
    else
    {
        struct node*q=head;
        while (q!=NULL)
        {
            printf("%d is ELEMENT \n",q->data);
            q=q->link;
        }
           
    }
    return head;
    
}

int length(struct node* head)
{
    struct node*temp=head;
    int x=0;
    while (temp!=NULL)
    {
        x++;
        temp=temp->link;
    }
    return x;
}
