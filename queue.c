#include <stdio.h>
#include <stdlib.h>
#define max 5
int que[max],f=-1,r=-1;
void rear();
void front();
void display();

int main()
{
    int ch;
    printf("1. insert rear \n");
    printf("2. delete front \n");
    printf("3. display \n");
    printf("4. exit \n");
    while(1){
        printf("enter choice \n");
        scanf("%d",&ch);
        switch(ch){
            case 1: rear();
            break;
            
            case 2: front();
            break;
            
            case 3: display();
            break;
            
            case 4: exit(0);
            break;
            
            default:
            printf("wrong choice \n");
            
        }
    }

    return 0;
}

void rear(){
    int item;
    
    if (r==max-1)
    {
        printf("queue is full \n");
    }
    else
    {
        if(f==-1)
        {
            f=0;
        }
        
        printf("enter ur element \n");
        scanf("%d",&item);
        r=r+1;
        que[r]=item;
    }
    
}

void front(){
    if (f==-1)
    {
        printf("stack empty \n");
    }
    else
    {
        printf("removed element is %d \n",f);
        f=f+1;
    }
}


void display(){
    int i;
    if (f==-1)
    {
        printf("queue is empty ");
    }
    
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("%d \n",que[i]);
        }
    }
}