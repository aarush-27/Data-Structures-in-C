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
int main()
{

}
// Pop function must do the folowing:
// If stack is empty then return an error message
// else return the topmost element and reduce the counter by one

int pop(struct stack *ps)
{
    if (empty(ps))
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    return ps->items[ps->top--];
    // ps->items => (*ps).items ===> acessing the array
    // ps->top ===> adress of the topmost element 
    // decrease (*ps).top by one (ps->top--)
    // all these operations are carried out in one line
}