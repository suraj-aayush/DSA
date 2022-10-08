#include <stdio.h>
#include <string.h>        // THIS IS ONLY WRITTEN FUNCTION , NOT THE COMPLETE MENU DRIVEN PROGRAMME
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};



void instert()
{
    struct node* temp;
    int loc;
    printf("enter location to insert ");
    scanf("%d",&loc);
    
int len=length();

    if(loc>len)
    {
        printf("Invalid location , out of list");
    }
    
    else
    {
        struct node* p=head;
        while(i<loc)
        {
            p=p->link;
            i++;
            
        }
        
        temp=(struct node *)malloc (sizeof(struct node));
        printf("enter node data to insert ");
        scanf("%d",&temp->data);
        temp->link=NULL;
        
        temp->link=p->link;
        p->link=temp;
        
        
    } 







    // //////////////////////////////////////////////////////////////////////////practice//////////////////////////////////////////////


    struct node{
  int data;
  struct node* link;
    
};

struct node* head=NULL;

void append()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data to append ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    
    if(head==NULL)
    {
        head=temp;
    }
    
    else
    {
        struct node*p;
        p=head;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        
        p->link=temp;
        temp->link=NULL;
        
        
    }
    
    
}

//---------------------------------------------------

void addbegin(){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data to append ");
    scanf("%d",&temp->data);
    
    if(head==NULL)
    {
        head=temp;
    }
    
    else
    {
    
    temp->link=head;
    head=temp;
    
    }
    
    
}


//--------------------------------------------------------------

void insertat(){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data to insert at ");
    scanf("%d",&temp->data);
    
    int pos;
    
    printf("enter location ");
    scanf("%d",&pos);
    
    if(pos>length())
    {
        printf("out of list \n");
    }
    
    else
    
    {
        struct node*p;
        p=head;
        
        while(p->link!=NULL)
        {
            p=p->link;
        }
        
        p->link=temp;
        temp->link=NULL;
    }
    
    
    
}
















//----------------------------------------------------

int length()
{
    struct node * temp=head;
    int c=0;
    if(temp==NULL)
    {
        printf("no node exist \n");
    }
    
    else
    {
        while(temp->link!=NULL)
        {
            c++;
            temp=temp->link;
        }
    }
    
    return c;
    
    
}


//--------------------------------------------------------------


void display()
{
    struct node * temp=head;
    int c=0;
    if(temp==NULL)
    {
        printf("no node exist \n");
    }
    
    else
    {
        while(temp->link!=NULL)
        {
            printf("%d is data \n ",temp->data);
            temp=temp->link;
        }
    }
    
    return c;
    
    
}