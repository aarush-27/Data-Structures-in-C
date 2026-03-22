#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACKELEMENTS 100
struct stack{
    int top;
    int items[STACKELEMENTS];
};
bool empty(struct stack *ps);
int pop(struct stack *ps);
int main()
{
    int i;
    struct stack s;
    i = pop(&s);
    i = pop(&s);
}
bool empty(struct stack *ps)
{
    return ps->top==-1;
}
int pop(struct stack *ps)
{
    if (empty(ps))
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    return ps->items[ps->top--];
}