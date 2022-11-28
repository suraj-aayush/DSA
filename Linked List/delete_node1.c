#include <stdio.h>
#include <string.h>
#include <stdlib.h>         //DELETING NODE BYT SRINIVAS   // NARESH TECHNOLOGY

struct node
{
    int data;
    struct node *link;
}

struct node* head=NULL;

void delete(){
    struct node* temp;
    int position;
    printf("enter position to delete \n");
    scanf("%d",&position);

    if (position>length())
    {
        printf("invalid location to delete \n");  // position greater than length of the node   
    }
    
    else if (position==1)                         //////   D E L E T E   1ST   N O D E 
    {
        temp=head;
        head=temp->link;
        temp->link=NULL;
        free(temp);
    }

    else                                        //////  DELETE AT ANY POSIITON
    {
        struct node*p=head, *q;
        int i=1;
        while (i<position-1)
        {
            p=p->link;
            i++;
        }

        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}



// void delete(){
//     struct node * temp;
//     int pos;
//     printf("enter position ");
//     scanf("%d",&pos);

//     if(pos>length())
//     {
//         printf("invalid \n");

//     }

//     else if(pos==1)
//     {
//         temp=head;
//         head=temp->link;
//         temp->link=NULL;
//         free(temp);
//     }

//     else
//     {
//         struct node *p=head, *q;
//         int i=1;
//         while (i < pos-1)
//         {
//             p=p->link;
//             i++;
//         }

//         q=p->link;
//         p->link=q->link;
//         q->link=NULL;
//         free(q);
        
//     }
//      }