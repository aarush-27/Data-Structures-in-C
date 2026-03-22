#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define STACKSIZE 100
struct stack{
    int top;
    int items[STACKSIZE];
};
bool empty(struct stack *ps)
{
    return ps->top == -1;
}
int pop(struct stack *ps);
void push(struct stack *ps, int x);
int main()
{

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
void push(struct stack *ps, int x)
{
    if(ps->top==STACKSIZE-1)
    {
        printf("STACK OVERFLOW");
        exit(1);
    }
    else
    {
        ps->items[++(ps->top)] = x;
        return;
    }
}