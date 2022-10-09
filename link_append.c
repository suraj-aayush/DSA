#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node
{
    int x;
    struct node*link;
};

struct node * head=NULL;

void append(){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->x);
    temp->link=NULL; // dont miss this///////////////////////////////////////////

    if(head==NULL)
    {
        head=temp;
    }

    else
    {
        struct node* p;
        p=head;
        while (p->link=NULL)
        {
            p=p->link;
        }

        p->link=temp;
        
    }
}

// int main(){
//     int ch;
//     while (1)
//     {
//         printf("enter your choice \n");
//         printf("1. for append \n");
//         printf("3. quit\n");
//         scanf("%d",&ch);
        
//         switch (ch)
//         {
//         case 1: append();
//             break;
        
//         case 3:exit(0);
//         default:
//         printf("wrong input\n ");
//             break;
//         }

//     }
    
    
// return 0;
// }
