#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define STACKSIZE 100
struct stack{
    int top;
    int items[STACKSIZE];
};
bool empty(struct stack *ps);
int pop(struct stack *ps);
int main()
{
    int n,i;
    struct stack s;
    for (int j=0;j<n;j++)
    {
        i = pop(&s);
    }
}
bool empty (struct stack *ps){
    return ps->top==-1;
}
int pop(struct stack *ps){
    if (empty(ps))
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    return ps->items[ps->top--];
}