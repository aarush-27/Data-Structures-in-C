#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACKSIZE 100
struct stack{
    int items[STACKSIZE];
};

bool empty(struct stack *ps);
int pop (struct stack *ps);
void push (struct stack *ps,int x);
int stacktop (struct stack *ps);

int main()
{
    struct stack s;
    s.items[0]=-1;
}

bool empty(struct stack *ps)
{
    return ps->items[0]==-1;
}
int pop (struct stack *ps)
{
    if (empty(ps))
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    return ps->items[ps->items[0]--];
}
void push (struct stack *ps,int x)
{
    if (ps->items[0]==STACKSIZE-1)
    {
        printf("STACK OVERFLOW");
        exit(1);
    }
    ps->items[++(ps->items[0])] = x;
}
int stacktop (struct stack *ps)
{
    return ps->items[ps->items[0]];
}