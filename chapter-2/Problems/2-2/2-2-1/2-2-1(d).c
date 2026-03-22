#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define STACKSIZE 100
struct stack{
    int top;
    int items[STACKSIZE];
};
bool empty (struct stack *ps){
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
void push(struct stack *ps,int x){
    if(ps->top==STACKSIZE-1){
        printf("STACK OVERFLOW");
        exit(1);
    }
    ps->items[++(ps->top)]=x;
}
int stacktop(struct stack *ps){
    return ps->items[ps->top];
}
int main()
{
    int n,i,residue[STACKSIZE];
    struct stack s;
    for(int j=0;j<n-1;j++)
    {
        residue[j] = pop(&s);
    }
    i = stacktop(&s);
    for (int j=n-2;j>=0;j--)
    {
        push(&s,residue[j]);
    }
}