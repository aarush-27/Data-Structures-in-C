#include <stdio.h>
#include <stdlib.h>
int empty(ps);
#define STACKSIZE 100
struct stack 
{
    int top;
    int items[STACKSIZE];
};
// Stacks are defined as atructures containing two variables
// One is the array that contatins the items
// Other is the counter that stores the place of topmost element
int main()
{
    struct stack s;
    // We assume that a stack has only one type of variables (homogeneous)
    s.top = -1;
    empty (&s); // Checking if the stack is empty or not
}
// We can also define a function that helps us see if a stack is empy or not
int empty(struct stack *ps)
{
    if (ps->top==-1)
    {
        return 1;
    }
    return 0;
}