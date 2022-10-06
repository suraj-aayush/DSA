#include <stdio.h>
#include <string.h>        // THIS IS ONLY WRITTEN FUNCTION , NOT THE COMPLETE MENU DRIVEN PROGRAMME
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

                    ////////// DECLARING GLOBALLY TO STORE LEGTH TO USE ANYWHERE////////////

struct node* head=NULL;
int len;            
                    
                    ////////// DECLARING GLOBALLY TO STORE LEGTH TO USE ANYWHERE////////////



                        ////////////////// A P P E N D   F U N C T I O N /////////////////////////

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

        p=temp;  // p->link=temp; ....may be this
    
    }   
}

                        ////////////////// L E N G T H    F U N C T I O N /////////////////////////

int length(){
    int c=0;
    struct node * temp;
    temp=head;
    while (temp->link!=NULL)
    {
        c++;
        temp=temp->link;
    }
    return c;
}

                        ////////////////// A D D   A T   B E G I N   F U N C T I O N /////////////////////////

void addAtBegin(){
    struct node * temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter data for begin \n ");
    scanf("%d",&temp->data);
    temp->link=NULL;

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

                                  ////////// DECLARING GLOBALLY TO STORE LEGTH TO USE ANYWHERE////////////



void lenght()
{
    int c=0;
    struct node*temp;
    temp=head;
    while (temp->link!=NULL)
    {
        printf("%d is data \n",temp->data);
        temp=temp->link;
    }
    return c;
    
}

