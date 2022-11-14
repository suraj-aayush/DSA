#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5

int push(int[],int);
int pop(int[],int);
void peek(int[],int);
void display(int[],int);

int main(){
    int ch;
    int stack[MAX],top=-1;
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

int push(int stack[MAX], int top)
{
    if (top==MAX-1)
    {
        printf(" NO ELEMENTS TO PUSH \n");
    }
    else
    {
        top++;
        printf("enter data to push \n");
        scanf("%d",&stack[top]);
    }
    return top;  
}

int pop(int stack[MAX], int top)
{
    if (top==-1)
    {
        printf(" NO ELEMENTS TO POP ");
    }
    else
    {
        printf("\n ELEMENT POPPED IS %d ",stack[top]);
        top--;
    }
    return top;
}

void display(int stack[MAX], int top)
{
    if(top==-1)
    {
        printf(" \n    NO ELEMENTS  \n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d is element <<--\n\n",stack[i]);
        }  
    }
}

void peek(int stack[MAX], int top)
{
    printf("\n \n %d is topmost element ==> ",stack[top]);
}