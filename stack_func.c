#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 5
int stack[max],top=-1;

void main(){
int ch,ele,n;
   while (1)
   {
    printf("1.push\n 2. pop\n 3.display\n 4. peek \n 5.quit ");
    printf("enter ur choice ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
    printf("enter ur element ");
    scanf("%d",&n);
    push(n);


    case 2: pop();
    printf("enter ur element ");
    scanf("%d",&n);


    case 3: display();
    printf("enter ur element ");
    scanf("%d",&n);


    case 4: peek();
    printf("enter ur element ");
    scanf("%d",&n);


    case 5: exit();  
       
    default:
    printf("invalid cases ");
        break;
    }
   }
}

//func for stack overflow

int full(){
    if(top==max-1)
    {
       return 1;
    }
    else
    {
        return 0;
    }
    
}

//PUSH FUNC

void push(int a){ 
    if (full())
    {
        printf("stack ids fullll");
    }
    else
    {
        top++;
        stack[top]=a;
        printf("%d is pushed",a);
    }
    
    top++;
    stack[top]=a;
}