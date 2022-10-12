#include <stdio.h>

struct node{
    int x;
    double y;
    struct node *link;
};

int main()
{
    struct node a,b,*p=NULL;
    printf("enter value 1\n");
    scanf("%d%lf",a.x,a.y);
    
     printf("enter value 2\n");
    scanf("%d%lf",b.x,b.y);
    
    p=&a;
    a.next=&b;
    b.next=NULL;
    
    while(p!=NULL)
    {
        printf("%d\n%f\n",p->x,p->y);
        p=p->next;
    }
    

    return 0;
}
