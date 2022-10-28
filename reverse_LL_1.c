#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node* link;
};

struct node *append(struct node *);
struct node *display(struct node *);
struct node *middle_node(struct node *);
struct node *reverse (struct node *);

int main(){
    
struct node *head=NULL;
    int ch;
    while (1)
    {
        printf("enter your choice \n");
        printf("1. for append \n");
        printf("2. for display \n");
        printf("3. quit\n");
        printf("4. reverse\n 5. middle node new \n");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1: head = append(head);
        break;

        case 2: head=display(head);
        break;

        case 3:exit(0);

        case 4: head=reverse(head);
        break;

        case 5: head=middle_node(head);
        break;

        default:
        printf("wrong input\n ");
            break;
        }

    } 

return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

struct node *reverse(struct node *head)
{
    struct node *previous=NULL;
    struct node *current=head;
    struct node *next;

    while (current!=NULL)
    {
        next=current->link;
        current->link=previous; 

        previous=current;
        current=next;
    }
    return previous;
}


////////////////////////////////////////////////////////////////////////////////

struct node* display(struct node *head)
{
    struct node* temp=head;
    while (temp!=NULL)
    {
        printf("\n %d is data \n",temp->x);
        temp=temp->link;
    }  
    return head;
}

/////////////////////////////////////////////////////////////////////////////////

struct node *append(struct node *head)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("ENTER DATA TO ENTER \n");
    scanf("%d",&temp->x);
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
//////////////////////////////////////////////////////////////////////////////////////

struct node *middle_node(struct node *head)
{
    struct node *slow=head;
    struct node *fast=head;

    while (fast->link!=NULL)
    {
        fast=fast->link;
        if (fast->link!=NULL)
        {
            fast=fast->link;
        }
        slow=slow->link;
    }
    printf("\n\n ==>> %d is middle elemnt \n\n ",slow->x);

    return head;
}

