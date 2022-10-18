#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node* next;
};

struct node* head=NULL;

void middle(struct node *);
struct node *append(struct node *);
struct node *display(struct node*);

/////////////////////////////////////-----------------------------------------------------------
struct node* display(struct node *head)
{
    struct node* temp=head;
    while (temp->next!=NULL)
    {
        printf("\n %d is data \n");
        temp=temp->next;
    }  
}
///////////////////////////////////--------------------------------------------------------------
int main(){
    int ch;
    while (1)
    {
        printf("enter your choice \n");
        printf("1. for append \n");
        printf("2. for display \n");
        printf("3. quit\n");
        printf("4. show middle \n");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1: head = append(head);
        break;

        case 2:display(head);
        break;

        case 3:exit(0);

        case 4: middle(head);
        break;

        default:
        printf("wrong input\n ");
            break;
        }

    }  
return 0;
}
void middle(struct node *head)
{
    struct node *fast=head;
    struct node *slow=head;

    while (fast->next!=NULL)
    {
        fast=fast->next;
        if(fast->next!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    printf("%d is DATA -- ",slow->x); 

}

struct node *append(struct node *head)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("ENTER DATA TO ENTER \n");
    scanf("%d",&temp->x);
    temp->next=NULL;
    if (head==NULL)
    {
        head=temp;
        temp->next=NULL;
    }
    else
    {
        struct node*p=head;
        while (p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        temp->next=NULL;     
    }
    return head;
}