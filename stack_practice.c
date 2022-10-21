#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 5

int push(int [],int);
int pop(int [],int);
void peek(int [],int);
int display(int [],int);

int main(){
    int stack[max],top=-1;
    int ch;
    
    while (1)
    {
        printf("\n\n 1. PUSH \n 2. POP \n 3. Display \n 4. PEEK \n\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: top=push(stack,top);
            break;

        case 2: top=pop(stack,top);
            break;

        case 3: display(stack,top);
            break;

        case 4: peek(stack,top);
            break;

        case 5: exit(0);
               
        default:
        printf(" \n WRONG INPUT \n ");
            break;
        }
    }
    
return 0;
}

int push(int stack_arr[max],int top)
{
    if(top==max-1)
    {
        printf(" STACK IS FULL \n");
    }
    else
    {
        top++;
        printf(" ENTER ELEMENT \n ");
        scanf("%d",&stack_arr[top]);
    }
    return top;
}

int pop(int stack_arr[max],int top)
{
    if (top==-1)
    {
        printf("\n NO ELEMENT TO DeLETE \n");
    }
    else
    {
        printf(" ----> %d ----> is deleted element \n",stack_arr[top]);
        top--;
    }

    return top;
}

int display(int stack_arr[max],int top)
{
    if(top==-1)
    {
        printf("...NO ELEMENTS TO DISPLAY .... \n");
    }
    for (int i = top; i>=0; i--)
    {
        printf("%d is the element BROOOOO \n",stack_arr[i]);
    }
}

void peek(int stack_arr[max],int top)
{
    if (top==-1)
    {
        printf(" \n NO ELEMENT FOUND \n ");
    }
    else
    {
        printf("--==>> %d --==>> is top element \n",stack_arr[top]);
    }
}

