#include <stdio.h>
#include <string.h>

struct node{
    int x;
    float y;
    struct node *next;
};

int main()
{
    struct node a,b,c, *p=NULL;
    a.x=10;
    a.y=2.0;
    b.x=15;
    b.y=3.0;
    c.x=99;
    c.y=20.0;
    
    a.next=&b;
    b.next=&c;
    c.next=NULL;
    
    p=&a;
    
    while(p!=NULL)
    {
        printf("%d\n%f\n",p->x,p->y);
        p=p->next;
    }

    return 0;
}
