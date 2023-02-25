#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    struct node* left;
    int data;
    struct node *right;
};

struct node *head=NULL;
void palindrome(struct node*);
struct node *append(struct node* );
struct node *display(struct node *);
// struct node *addbegin(struct node*);

struct node *check(struct node *);

int main(){
    struct node *head=NULL;
    int ch;

    while (1)
    {
        printf("\n\n --> enter your choice \n");
        printf("1. for append \n 2. count pali ");
        printf("4.show low values\n  6. display \n");
        printf("7. quit\n 3. check and print two primes \n");
       //  printf("\n11. revrse \n 12. sort\n 13. middle print \n");
      //   printf("14 . sort");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1:head=append(head);
        break;

        case 2: palindrome(head);
        break;

        case 4:head=check(head);
        break;

        case 6:head=display(head);
        break;

        case 7:exit(0);

        default:
        printf("wrong input\n ");
            break;
        }

    } 
return 0;
}

struct node *append(struct node* head)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n ENTER DATA ---> ");
    scanf("%d",&temp->data);
    
    if(head==NULL)
    {
        head=temp;
        temp->left=NULL;
        temp->right=NULL;
    }

    else
    {
        struct node *p=head;
        while (p->right != NULL)
        {
            p=p->right;
        }
        p->right=temp;
        temp->left=NULL;
    temp->right=NULL;
    }

    return head;

}

struct node *display(struct node*head)
{
    struct node *p=head;
    while (p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->right;
    }
    return head;
}

struct node *check(struct node *head)
{
    struct node *p=head;
    int val;
    printf("\n enter value to print lower nodes \n ");
    scanf("%d",&val);

    while (p->data < val)
    {
        printf(" %d ",p->data);
        p=p->right;
    }
    

    return head;
}

void palindrome(struct node *head )
{
    struct node *p=head;
    int count=0;
    while (p!=NULL)
    {
        int num=p->data;
        int rem,rev;

        while (num>0)
        {
            rem=num%10;
            rev=rev*10 +rem;
        }
        if (num==rev)
    {
        count++;
    }
        p=p->right;
    }

   
    printf("\n\n is no. of pali --> %d\n",count);
    
}