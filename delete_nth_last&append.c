#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node* head=NULL;
int len;            
void append();
void delete();

int main(){
     int ch;
    while (1)
    {
        printf("enter your choice \n");
        printf("1. for append \n");
        printf("2. for length \n");
        printf("3. quit\n");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1: append();
            break;

        case 2: delete();
            break;
        case 3:exit(0);
        default:
        printf("wrong input\n ");
            break;
        }

    }      
return 0;
}


void append(){
    struct node * temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data for append \n");
    scanf("%d",&temp->data);
    temp->link=NULL;

    if (head==NULL)
    {
        head=temp;
    }
    else
    {
        struct node*p;
        p=head;
        while (p->link!=NULL)
        {
            p=p->link;
        }

        p->link=temp;  // p->link=temp; ....may be this
    
    }   
}

void delete()
{
    nodetype *temp=head;
    nodetype *q;
    int i=1,n;
    printf("\n enter n  ");
    scanf("%d",&n);

    int c=0;
    q=head;
    while (q!=NULL)
    {
        c++;
        q=q->link;
    }
    printf("length is %d \n",c);
    while (i<c-n)
    {
        temp=temp->link;
        i++;
    }
    q=temp->link;
    temp->link=q->link;
    free(q);   
}