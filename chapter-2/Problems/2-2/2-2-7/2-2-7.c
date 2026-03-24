#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACKSIZE 1000
int items[STACKSIZE];

struct stack{
    int top;
};

bool isfull(struct stack *ps1, struct stack *ps2);

bool empty1 (struct stack *ps);
bool empty2 (struct stack *ps);

int pop1 (struct stack *ps);
int pop2 (struct stack *ps);

void push1 (struct stack *ps1,struct stack *ps2, int x);
void push2 (struct stack *ps2,struct stack *ps1, int x);

int stacktop (struct stack *ps);

int main()
{
    struct stack s1,s2;
    s1.top = -1;
    s2.top = STACKSIZE;
    return 0;
}

bool isfull(struct stack *ps1, struct stack *ps2)
{
    return ps1->top+1==ps2->top;
}

bool empty1 (struct stack *ps)
{
    return ps->top == -1;
}
bool empty2 (struct stack *ps)
{
    return ps->top == STACKSIZE;
}


int pop1 (struct stack *ps)
{
    if (empty1(ps))
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    return items[ps->top--];
}
int pop2 (struct stack *ps)
{
    if (empty2(ps))
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    return items[ps->top++];
}


void push1 (struct stack *ps1,struct stack *ps2, int x)
{
    if(isfull(ps1,ps2))
    {
        printf("STACK OVERFLOW");
        exit(1);
    }
    items[++(ps1->top)] = x;
}
void push2 (struct stack *ps2,struct stack *ps1, int x)
{
    if(isfull(ps1,ps2))
    {
        printf("STACK OVERFLOW");
        exit(1);
    }
    items[--(ps2->top)] = x;
}


int stacktop (struct stack *ps)
{
    return items[ps->top];
}