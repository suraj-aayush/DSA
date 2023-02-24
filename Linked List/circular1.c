#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *append(struct node *);
struct node *display(struct node *);
// struct node *delete(struct node *);
// struct node *insert_after(struct node *);
// struct node *insert_position(struct node *);


int main(){
    struct node *head=NULL;
    int ch;
    while (1)
    {
        printf("1. APPEND \n");
        printf("2. display \n");
      //  printf("3. delete \n");
        printf("4. exit \n");
      //  printf("5. insert after a value \n");
       // printf("6. insert at a given position \n");

        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            head=append(head);
            break;
        
        case 2:
            head=display(head);
            break;

        // case 3:
        //     head=delete(head);
        //     break;

        case 4:
            exit(0);
            break;

        // case 5: head=insert_after(head);
        // break;

        // case 6: head=insert_position(head);
        // break;

        default:
        printf("  \n    WRONG INPUT \n  ");
            break;
        }
    }
    
return 0;
}

struct node *append(struct node *head)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n    => ENTER DATA ");
    scanf("%d",&temp->data);

    if (head==NULL)
    {
        head=temp;
        temp->link=head;
    }
    else
    {
        struct node *p=head;
        while (p->link!=head)
        {
            p=p->link;
        }
        p->link=temp;
        temp->link=head;
    }
    
    return head;
}
/////////////////////////////////////////////////////////////////////////
struct node *display(struct node *head)
{
    struct node *temp=head;
    while (temp->link!=head)
    {
        printf("\n \n ==> %d is the data in list ",temp->data);
        temp=temp->link;
    }
    printf("\n -=-=>> %d is last element ",temp->data);
    return head;
}