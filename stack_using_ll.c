#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stack{
    int data;
    struct stack* link;
};



int main(){
    
return 0;
}

struct stack* push(struct stack *top)
{
    struct stack*temp;
    temp=(struct stack*)malloc(sizeof(struct stack));
    printf("enter data ");
    scanf("%d",&temp->data);

    temp->link=top;
    top=temp;

    return top;
}

struct stack *pop(struct stack *top){
    struct stack *temp=top;
    if(top==NULL)
    {
        printf("no");
    }
    else
    {
        printf("%d is deleted ",top->data);
        top=top->link;
        free(temp);
    }

    return top;
}

struct stack *pop(struct stack *top)
{
    struct stack *temp=top;
    printf("%d is deleted ",temp->data);
    top=top->link;
    free(temp);

    return top;
}
