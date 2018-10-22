/*
    Hasan Eren KESKIN
    http://herenkeskin.com
    http://github.com/erenkeskin

    Stack Implementation
    v0.1
*/

#include <iostream>
#include "stack.h"

using namespace std;
 
int main(void)
{
    // Declare the Stack object
    Stack stack_data;
    
    stack_data.push(8);
    stack_data.push(32);
    stack_data.push(73);
    stack_data.pop();
    stack_data.push(0);
    stack_data.push(49);
    stack_data.push(13);
    stack_data.pop();
    stack_data.push(4);
    stack_data.push(16);
    stack_data.push(35);
    stack_data.push(21);
    stack_data.pop();
    stack_data.sortItems();
    stack_data.displayItems();

    return 0;
}