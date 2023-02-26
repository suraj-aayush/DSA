#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * link;
};

struct node *head=NULL;

struct node *append(struct node* );
struct node *insert_begin(struct node* );
struct node *insert_last(struct node* );
struct node *insert_before(struct node* );
struct node *insert_after(struct node* );
struct node *delete(struct node* );
struct node *delete_begin(struct node* );
struct node *delete_last(struct node* );
struct node *delete_position(struct node* );
struct node *display(struct node *);
int length(struct node *);

int main(){
    int ch;
    int len;
    while (1)
    {
   
    printf("1. APPEND \n");    
    printf("2. INSERT_BEGIN \n");
    printf("3. INSERT_LAST \n");
    printf("4. INSERT_BEFORE \n");
    printf("5. INSERT_AFTER \n");
    printf("6. DELETE \n");
    printf("7. DELETE_BEGIN \n");
    printf("8. DELETE_LAST \n");
    printf("9. DELETE_POSITION \n");
    printf("10. DISPLAY \n");
    printf("11. LENGTH BTAAO \n");

    printf("12...FOR EXITTT----->");

    printf("ENETR CHOICE SAALE \n");

    switch (ch)
    {
        case 1: head=append( head);
        break;

        case 2: head=insert_begin(head);
        break;

        case 3: head=insert_last(head);
        break;

        case 4: head=insert_before(head);
        break;

        case 5: head=insert_after( head);
        break;
    
        case 6: head=delete( head);
        break;

        case 7: head=delete_begin(head);
        break;

        case 8: head=delete_last( head);
        break;

        case 9: head=delete_position(head);
        break;

        case 10: head=display(head);
        break;

        case 11: len=length(struct node *head);
        printf("===>>> %d ===>>> is length \n");
        break;

    default:
        break;
    }
    }
return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct node* append(struct node *head)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA TO INPUT \n");
    scanf("%d",&temp->data);

    if(head==NULL)
    {
        head=temp;
        temp->link=NULL;
    }
    else
    {
        struct node *p=head;
        while (p->link != NULL)
        {
            p=p->link;
        }
        p=temp;
        temp->link=NULL;     
    }

    return head;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
struct node* insert_begin(struct node *head)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA TO INPUT \n");
    scanf("%d",&temp->data);
    
    temp->link=head;
    head=temp;

    return head;
}

/// @brief //////////////////////////////////////////////////////////////////////////////////////
struct node* insert_last(struct node *head)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA TO INPUT \n");
    scanf("%d",&temp->data);

    struct node *p=head;

    while (p->link!=NULL)
    {
        p=p->link;
    }

    p=temp;
    temp->link=NULL;
    
    return head;
}
////////////////////////////////////////////////////////////////////////////////////////////
struct node *insert_position(struct node *head)
{
    int pos;
    printf("\n ENTER POSITION \n ");
    scanf("%d",&pos);
    struct node *temp, *p;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("ENTER position  wala NODE DATA \n");
    scanf("%d",&temp->data);

int i=1;
    while (i<pos-1)
    {
        p=p->link;
    }

    temp->link=p->link;
    p->link=head;

    return head;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
struct node *insert_after(struct node *head)
{
    struct node *temp, *p=head, *preptr;
    int val;

    temp=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA FOR INSERT BEFORE \n");
    scanf("%d",&temp->data);

    printf("enter value to insert after \n ");
    scanf("%d",&val);

    while (p->data != val)
    {
        preptr=p;
        p=p->link;
    }
    
    temp->link=ptr->link;
    ptr->link=temp;

    return head;
}










struct node *display(struct node *head)
{
    struct node *temp=head;
    while (temp->link!=NULL)
    {
        printf("---->> %d ---->> is data ",temp->data);
    }
    
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
int length(struct node *head)
{
    struct node *p=head;
    int l=0;
    while (p!=NULL)
    {
        l++;
    }
    
    return l;
}














