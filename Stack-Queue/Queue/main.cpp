/*
    Hasan Eren KESKIN
    http://herenkeskin.com
    http://github.com/erenkeskin

    Queue Implementation
    v0.1
*/

#include <iostream>
#include "queue.h"

using namespace std;

int main(void)
{

    Queue queue;

    queue.enqueue(8);
    queue.enqueue(32);
    queue.enqueue(73);
    queue.dequeue();
    queue.enqueue(0);
    queue.enqueue(49);
    queue.enqueue(13);
    queue.dequeue();
    queue.enqueue(4);
    queue.enqueue(16);
    queue.enqueue(35);
    queue.enqueue(21);
    queue.dequeue();
    queue.sortItems();
    queue.displayItems();

    return 0;
}