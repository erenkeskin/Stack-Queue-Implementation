/*
    Hasan Eren KESKIN
    http://herenkeskin.com
    http://github.com/erenkeskin

    Queue Implementation
    v0.1
*/

#include <iostream>
#include <cstdlib>
#include "queue.h"

using namespace std;

// Generate Constructor
Queue::Queue(void)
{
    rear = -1;
    front = 0;
}

// Enqueue the data
void Queue::enqueue(int data)
{
    store[++rear] = data;
}

// Dequeue data from Queue
int Queue::dequeue(void)
{
    return store[front++];
}

// Get size of Queue
int Queue::size(void)
{
    return (rear - front + 1);
}

// Control - If the Queue is Empty?
bool Queue::isEmpty(void)
{
    if(front > rear)
    {
        return true;
    } else {
        return false;
    }
}

// Control - If the Queue is full?
bool Queue::isFull(void)
{
    if(this->size() >= MAXIMUM_SIZE)
    {
        return true;
    } else {
        return false;
    }
}

// Sort the items in Stack - Bubble Sort Algorythm
void Queue::sortItems(void)
{
    int temporary = 0;
    int i = 0, j = 0;

    int sizeOfQueue = this->size() + 2;

    for (i = 1; i < sizeOfQueue + 1; i++)
    {
        for (j = 0; j < sizeOfQueue + 1 - i; j++)
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

// Print the all items from Queue
void Queue::displayItems(void)
{
    int i = 0;

    cout << "Queue is: ";

    // If Queue isn't empty, print the data on queue
    if(!this->isEmpty())
    {
        for(i = front; i <= rear; i++)
        {
            cout << store[i] << " ";
        }
    } else {
        // If it is empty, print an error message
        cout << "Queue is empty" << endl;
    }
}