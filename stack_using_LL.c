#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stack{
    int data;
    struct stack *link;
};

struct stack *top=NULL;

struct stack *push(struct stack*);
struct stack *pop(struct stack*);
struct stack *display(struct stack*);

int main(){
    int ch;
    while (1)
    {
        printf("1. PUSH \n");
        printf("2. POP\n");
        printf("3. DISPLAY \n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: top=push(top);
        break;
        
        case 2: top=pop(top);
        break;

        case 3: top=display(top);
        break;

        case 4: exit(0);
        break;
        }

    }
    
    
return 0;
}
//////////////////////////////////////////////////////////////
struct stack* push(struct stack *top)
{
    struct stack *temp;
    temp=(struct stack*)malloc(sizeof(struct stack));
    printf("    \n ENTER DATA BRO =>  ");
    scanf("%d",&temp->data);

    temp->link=top;
    top=temp;

    return top;
}
////////////////////////////////////////////////////////////////
struct stack *pop(struct stack *top)
{
    struct stack *temp;
    temp=top;
    if(top==NULL)
    {
        printf("   NO ELEMENTS      ");
    }
    else
    {
        printf("\n\n  ==>> %d id popped now     ->>",top->data);
        top=top->link;
        free(temp);
    }

    return top;
}
//////////////////////////////////////////////////////////////////
struct stack *display(struct stack *top)
{
    struct stack *temp=top;
    if (top==NULL)
    {
        printf("\n\n EMPTY LISTT \n");
    }
    
    else
   { 
    while (temp!=NULL)
    {
        printf("\n\n %d ==> is element buddy",temp->data);
        temp=temp->link;
    }
   }
    return top;
}




