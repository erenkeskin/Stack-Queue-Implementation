/*
    Hasan Eren KESKIN
    http://herenkeskin.com
    http://github.com/erenkeskin

    Stack Implementation
    v0.1
*/

#include <iostream>
#include <cstring>
#include "stack.h"

using namespace std;

// Generate Constructor
Stack::Stack(void)
{
    index = -1;
}
 
// Control - If the stack is emtpy?
int Stack::isEmpty(void)
{
    if(index == -1)
    {
        return 1;
    } else {
        return 0;   
    }
}
 
// Control - If the stack is full?
int Stack::isFull(void)
{
    if(index == (MAXIMUM_SIZE - 1))
    {
        return 1;
    } else {
        return 0;
    }
}

// Insert into a value on array
int Stack::push(int value)
{
    // Check Stack is full or not
    // If is full, return 0;
    if(isFull())
    {
        return 0;
    }

    // If Stack is'nt full, insert the value
    ++index;
    store[index] = value;

    return value;
}

// Pop the item from the Stack
int Stack::pop(void)
{
    int temporary = 0;

    // Check Stack is empty
    // If is empty, return 0;
    if(isEmpty())
    {
        return 0;
    }

    // If Stack is'nt emtpty, pop the value from stack
    temporary = store[index];
    --index;

    return temporary;
     
}

// Sort the items in Stack - Bubble Sort Algorythm
void Stack::sortItems(void)
{
    int temporary = 0;
    int i = 0, j = 0;

    for (i = 1; i < index + 1; i++)
    {
        for (j = 0; j < index + 1 - i; j++)
        {
            if(store[j] > store[j + 1])
            {
                temporary   = store[j];
                store[j]    = store [j + 1];
                store [j + 1] = temporary;
            }
        }
    }
}

// Print the all items from Stack
void Stack::displayItems(void)
{
    int i = 0;

    cout << "Stack is: ";

    for(i = index; i >= 0; i--)
    {
        cout << store[i] << " ";
    }

    cout << endl;
}
