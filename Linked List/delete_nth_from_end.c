#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* link;
}nodetype;


nodetype *head=NULL;
/////////////////////////////////
int length();
int len;//////////////////////////
void delete();
void display();
////////////////////////////////
int main(){

    nodetype a,b,c,d,e,f,g;
    head=&a;
    
    a.data=1;
    a.link=&b;

    b.data=2;
    b.link=&c;

    c.data=3;
    c.link=&d;

    d.data=4;
    d.link=&e;

    e.data=5;
    e.link=&f;

    f.data=6;
    f.link=&g;

    g.data=7;
    g.link=NULL;
int ch;
    printf("enter choice ");
    scanf("%d",&ch);

//while (1){
    switch (ch)
    {
    case 1:
        len=length();
        printf("\n %d is length \n ",len);
break;

    case 2:
        delete();
//break;

    case 3:
        display();
        break;
    
    case 4:       exit(0);
        break;
    default:
        break;
    }
//}

return 0;
}

int length()
{
    int c=0;
    nodetype *p=head;
    while (p->link!=NULL)
    {
        c++;
    }
    return c;
}
//////////////////////////////////////////////////////////////////////////////////////////////
void display()
{
    nodetype * temp=head;
    while (temp!=NULL)
    {
        printf("%d is element \n",temp->data);
        temp=temp->link;
    }
    
}
//////////////////////////////////////////////////////////////////////////////////////////////
void delete()
{
    nodetype *temp=head;
    nodetype *q;
    int i=1,n,l=0;
    printf("\n enter n  ");
    scanf("%d",&n);

struct node *hello=head;
while (hello!=NULL)
{
    l++;
    hello=hello->link;
}


    while (i<l-n)
    {
        temp=temp->link;
        i++;
    }
    q=temp->link;
    temp->link=q->link;
    free(q);   
}