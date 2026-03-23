#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define STACKSIZE 100
struct stack{
    int top;
    int items[STACKSIZE];
};
bool empty(struct stack *ps){
    return ps->top==-1;
}
int pop(struct stack *ps){
    if(empty(ps))
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    return ps->items[ps->top--];
}
void push (struct stack *ps, int x){
    if(ps->top==STACKSIZE-1)
    {
        printf("STACK OVERFLOW");
        exit(1);
    }
    ps->items[++(ps->top)] = x;
}
int stacktop(struct stack *ps){
    if (empty(ps))
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    return ps->items[ps->top];
}
int main()
{
    int c;
    struct stack s;
    s.top=-1;
    while ((c=getchar())!='C')
    {
        push(&s,c);
    }
    while ((c=getchar())!=EOF)
    {
        int t = stacktop(&s);
        if (t==c)
        {
            pop(&s);
        }
        else
        {
            printf("NOT COMPATIBLE");
            exit(1);
        }
    }
    if (!empty(&s))
    {
        printf("NOT COMPATIBLE");
        exit(1);
    }
    printf("COMPATIBLE");
    return 0;
}