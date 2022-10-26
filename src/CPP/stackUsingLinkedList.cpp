// Code written by Sachin Shah 
// Let's connect on GitHub - @imsachinshah
// Twitter - "@imsachinshah0"


#include <iostream>
#include <cstdlib>
using namespace std;

struct stack
{
    int data;
    struct stack *next;
};

int isEmpty(struct stack *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *top)
{
    stack *p = new stack();
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct stack *push(struct stack *top, int x)
{
    if (isFull(top))
        cout << "Stack Overflow \n";
    else
    {
        stack *n = new stack();
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct stack **top)
{
    if (isEmpty(*top))
    {
        cout << "Stack Underflow \n";
    }
    else
    {
        struct stack *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

void traverseStack(struct stack *top)
{
    while (top != NULL)
    {
        cout << "Element: " << top->data << "\n";
        top = top->next;
    }
}

int main()
{

    stack *top = new stack();

    top = push(top, 18);
    top = push(top, 1);
    top = push(top, 90);

    

    traverseStack(top);
    isEmpty(top);

    return 0;
}