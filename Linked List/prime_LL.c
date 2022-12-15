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
int isprime(int n);
struct node *twoprimes(struct node*);
struct node *deleteothers(struct node*);

int main(){
     struct node *head=NULL;
    int ch;
    int x;
    while (1)
    {
        printf("enter your choice \n");
        printf("1. for append \n 2. check prime ");
        printf("4.delete other than 2 primes \n  6. display \n");
        printf("7. quit\n 3. check and print two primes \n");
       //  printf("\n11. revrse \n 12. sort\n 13. middle print \n");
      //   printf("14 . sort");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1:head=append(head);
        break;

        case 2:x=isprime(head->data);
        if(x==0)
        {
            printf("\n prime node  -->> \n");
        }
        else
        {
            printf("\n NON PRIME \n");
        }
        break;

        case 3: head=twoprimes(head);
        break;

        case 4:head=deleteothers(head);
        break;

        // case 5:head=deletelast(head);
        // break;

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
//////////////////////////////////////////////////////////////////////////////////
int isprime(int n)
{
    int c=0;
    if(n==0 || n==1)
    {
        return 0;
    }
 
    for(int i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            c++;
        }
    }
    
    if (c==0)
    return 1;
    else
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


struct node *twoprimes(struct node *head)
{
    struct node *temp=head;
    while (temp!=NULL)
    {
        if(isprime(temp->data)==0)
        {
            printf("\n \n -->>>>>>> %d ----> THIS IS PRIME NODE \n",temp->data);
        }
        else
        {
            printf("\n\n %d ==>> this node is not a prime node <<==>>\n",temp->data);
        }

        temp=temp->link;
    }
    
    return head;
}

struct node *deleteothers(struct node *head)
{
    struct node *temp=head;
    while (temp!=NULL)
    {
        if(isprime(temp->data)==1)
        {
        struct node *p=temp;
        struct node *q=p->link;
            while (isprime(q->data)!=0)
            {
                p->link=q->link;
                printf("\n\n %d is deleted -->>",q->data);
                free(q);

                q=q->link;
              //  p=p->link;
            }
            
        }

        temp=temp->link;
    }

    return head;
    
}