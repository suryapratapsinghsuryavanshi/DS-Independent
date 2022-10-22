// Code written by Sachin Shah 
// Let's connect on GitHub - @imsachinshah
// Twitter - "@imsachinshah0"


#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{

    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

int isFull(struct stack *ptr)
{

    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{

    stack *s = new stack();
    s->arr = new int();

    s->size = 10;
    s->top = -1;
    s->top++;

    s->arr[s->top] = 6;
    s->top++;

    s->arr[s->top] = 9;
    

    if (isFull(s))
    {
        cout << "Stack is overflow. ";
    }
    else
    {
        cout << " Stack is not Overflow. ";
    }

    return 0;
}
