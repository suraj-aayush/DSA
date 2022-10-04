#include <stdio.h>
#include <stdlib.h>
#define max 10

int push(int [], int);
int pop(int [], int);
void display(int [], int);
void peek(int [], int);

int main()
{
    int top = -1, Stack_arr[max];
    int choice;
    while (1)
    {
        printf("Operation performed by Stack:");
        printf("\n1. for push element into stack\n2. for pop element form stack\n3. display element of stack\n4. printing peek element of stack\n5. exit");
        printf("\n enter the choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            top=push(Stack_arr, top);
            break;
        case 2:
            top=pop(Stack_arr, top);
            break;
        case 3:
            display(Stack_arr, top);
            break;
        case 4:
            peek(Stack_arr, top);
            break;
        case 5:
            exit(0);
        default:
            break;
        }
    }
}

//----------------------------------------------------
int push(int s[max], int top)
{
    int x;
    if (top == max - 1)
    {
        printf("\nstack is full\n");
    }
    else
    {
        printf("\nEnter element to be inserted to the stack:");
        scanf("%d", &x);
        top=top+1;
        s[top] = x;
        return top;
    }
    
}

//------------------------------------------------------
int pop(int s[max], int top)
{
    if (top == -1)
    {
        printf("\nempty\n");
    }
    else
    {
        printf("\nPopped element is %d\n\n", s[top]);
        top--;
        return top;
    }
    
}
void display(int s[max], int top)
{
    if (top == -1)
    {
        printf("\nempty\n");
    }
    else
    {
        for (int i = top; i >= 0; --i)
        {
            printf("%d\n", s[i]);
        }
    }
}
void peek(int s[max], int top)
{
    if (top == -1)
    {
        printf("\nempty\n");
    }
    else
    {
        printf("top most element of Stack %d\n\n", s[top]);
    }
}