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

int isEmpty(struct stack *ptr){

    if (ptr->top == -1)
    {
        // cout << "Stack is underflow. " << endl;
        return 1;
    }
    else{
        
        // cout<< "Stack is non empty. "<< endl;
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        // cout << "Stack is Overflow. " << endl;
        return 1;
    }
    else
    {
        // std::cout << "Stack is not Full" << std::endl;
        return 0;
    }
    
}

void push(struct stack * ptr, int data){

    if (isFull(ptr))
    {
        cout << "We can't push, Stack is Overflow" << endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = data;

        cout<< "Element " << ptr->arr[ptr->top] <<" is sucessfully pushed "<< endl;
    }
    
}

void pop(struct stack *ptr){

    if(isEmpty(ptr)){
        cout << "We can't pop, Stack is Underflow "<< endl;

    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        cout<< " Element " << val << "is poped out." << endl; 
    }
}

// Peek() function print the stack's element from position  

int peek(struct stack *ptr, int i){
    int val = ptr->top - i + 1;

    if (val < 0)
    {
        return -1;
    }
    else
    {
        return ptr->arr[val];
    }
    
    
}


int main() {

    stack *s = new stack();

    s->size = 15;
    s->top = -1;
    s->arr = new int();

    cout<< "Before pushing, Full : " << isFull(s) << endl;
    cout<< "Before pushing, Empty : " << isEmpty(s) << endl;

    push(s, 22);
    push(s, 23);
    push(s, 3);
    push(s, 77);
    push(s, 29);
    push(s, 5);
    push(s, 70);
    push(s, 99);
    push(s, 83);
    push(s, 87); 
    push(s, 81); 

    cout<< "After pushing, Full : " << isFull(s) << endl;
    cout<< "After pushing, Empty : " << isEmpty(s) << endl;

    for (int j = 1; j <= s->top + 1; j++)
    {
        cout<< "The Element in stack at position " << j << " is "<< peek(s, j) << endl; 
    }

    return 0;
}
