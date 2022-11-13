#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *append(struct node *);
struct node *display(struct node *);
struct node *addbegin(struct node *);
struct node *addlast(struct node *);
struct node *deletebegin(struct node *);
struct node *deletelast(struct node *);
struct node *addafter(struct node *);
struct node *addbefore(struct node *);
struct node *deletepos(struct node *);
struct node *reverse(struct node *);
struct node *sort(struct node *);
struct node *middle(struct node *);
struct node *sortThell(struct node *);


int main(){
    struct node *head=NULL;
    int ch;
    while (1)
    {
        printf("enter your choice \n");
        printf("1. for append \n 2.addbegin \n 3. add last \n ");
        printf("4.delete begin \n 5. delete last \n 6. display \n");
        printf("7. quit\n 8.add after\n 9. add before\n 10.deletepos");
         printf("\n11. revrse \n 12. sort\n 13. middle print \n");
         printf("14 . sort");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1:head=append(head);
        break;

        case 2:head=addbegin(head);
        break;

        case 3: head=addlast(head);
        break;

        case 4:head=deletebegin(head);
        break;

        case 5:head=deletelast(head);
        break;

        case 6:head=display(head);
        break;

        case 7:exit(0);

        case 8:head=addafter(head);
        break;

        case 9:head=addbefore(head);
        break;

        case 10:head=deletepos(head);
        break;

        case 11:head=reverse(head);
        break;

        case 12:head=sort(head);
        break;

        case 13:head=middle(head);
        break;

        case 14:head=sortThell(head);
        break;

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
    temp=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA FOR APPEND ->> ");
    scanf("%d",&temp->data);

    if(head==NULL)
    {
        head=temp;
        temp->link=NULL;
    }
    else
    {
        struct node *p=head;
        while (p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
        temp->link=NULL;
    }

    return head;
}

struct node *addbegin(struct node *head)
{
    struct node *temp;
     temp=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA FOR APPEND ->> ");
    scanf("%d",&temp->data);

    temp->link=head;
    head=temp;

    return head;
}

struct node *addlast(struct node * head)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA FOR add last ->> ");
    scanf("%d",&temp->data);

    struct node *p=head;
    while (p->link!=NULL)
    {
        p=p->link;
    }

    p->link=temp;

    return head;
}

struct node *deletebegin(struct node *head)
{
    struct node *p=head;
    head=p->link;
    free(p);

    return head;
}

struct node *deletelast(struct node *head)
{
    struct node *p=head, *preptr;
    while (p->link!=NULL)
    {
        preptr=p;
        p=p->link;
    }

    preptr->link=NULL;
    free(p);
    
    return head;
}

struct node *display(struct node *head)
{
    struct node *p=head;
    while (p!=NULL)
    {
        printf("\n %d is data ->> \n",p->data);
        p=p->link;
    }
    return head;
}

struct node *addafter(struct node *head)
{
    int value;

    printf("enter value after which u have to add data ");
    scanf("%d",&value);

    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA FOR add last ->> ");
    scanf("%d",&temp->data); 

    struct node *p=head;
    while (p->data!=value)
    {
        p=p->link;
    }
    temp->link=p->link;
    p->link=temp;
    
    return head;
}

struct node *addbefore(struct node *head)
{
    int value;

    printf("enter value before which u have to add data ");
    scanf("%d",&value);

    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA FOR add last ->> ");
    scanf("%d",&temp->data); 

    struct node *p=head;
    while (p->link->data!=value)
    {
        p=p->link;
    }
    temp->link=p->link;
    p->link=temp;
    
    return head;
}

struct node *deletepos(struct node *head)
{
    int value;
    printf(" Enter value of the node to delete \n");
    scanf("%d",&value);

    struct node *p=head,*preptr;
    while (p->data!=value)
    {
        preptr=p;
        p=p->link;
    }
    
    preptr->link=p->link;
    free(p);

    return head;
}

struct node *reverse(struct node *head)
{
    struct node *prev=NULL, *current=head, *next;
    while (current!=NULL)
    {
        next=current->link;
        current->link=prev;

        prev=current;
        current=next;
    }
    return prev;
}

struct node *middle(struct node *head)
{
    struct node *slow=head;
    struct node *fast=head;
    while (fast->link!=NULL)
    {
        fast=fast->link;
        if(fast->link!=NULL)
        {
            fast=fast->link;
        }
        slow=slow->link;
    }
    printf("\n\n ==>> middle node data is %d --> ",slow->data);
    return head;
    
}

//////////  S O R T I N G    E R R O R 
struct node *sort(struct node *head)
{
    int temp;
    struct node *p=head;
    while (p->link!=NULL)
    {
        if (p->data > p->link->data)
        {
        temp=p->data;
        p->data = p->link->data;
        p->link->data = temp;
        }
        p=p->link;       
    }
    return head;
}
/////

// struct node *sortThell(head) //  n number of nodes 
// {
//     struct node *nextNode;
//     struct node *prevNode;
//     int n;
//     struct node *temp=head;
//     while (temp!=NULL)
//     {
//         n++;
//         temp=temp->link;
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         prevNode=head;
//         nextNode=prevNode->next;
//         for(int j=i+1;j<n;j++)
//         {
//             if(prevNode->data>nextNode->data)                
//             {
//                 int t=prevNode->data;
//                 prevNode->data=nextNode->data;
//                 nextNode->data=t;
//             }
//             prevNode=nextNode;
//             nextNode=nextNode->next;
//         }
//     }
// }

// void sortThell() //  n number of nodes
// {
//     struct node *nextNode;
//     struct node *prevNode, *q;
//     struct node *temp = head;
//     while (temp != NULL)
//     {
//         prevNode = head;
//         nextNode = prevNode->next;
//         q = temp->next;
//         while (q != NULL)
//         {
//             if (prevNode->data > nextNode->data)
//             {
//                 int t = prevNode->data;
//                 prevNode->data = nextNode->data;
//                 nextNode->data = t;
//             }
//             prevNode = nextNode;
//             nextNode = nextNode->next;
//             q = q->next;
//         }
//         temp = temp->next;
//     }
// }

///////////////////////////////////////////

struct node *sortThell(struct node *head) //  n number of nodes
{
    struct node *nextNode;
    struct node *prevNode,*ptr;
    ptr = head;
    while (ptr->link != NULL)
    {
       // ctr = ptr->next;
        while (ptr->link != NULL)
        {
            if (ptr->data > ptr->link->data)
            {
               int t = ptr->data;
                ptr->data = ptr->link->data;
                ptr->link->data = t;
            }
            ptr->link = ptr->link->link;
        }
        ptr = ptr->link;
    }
    return head;
}