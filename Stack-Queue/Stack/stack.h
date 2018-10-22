/*
    Hasan Eren KESKIN
    http://herenkeskin.com
    http://github.com/erenkeskin

    Stack Implementation
    v0.1
*/

// Maximum size of Stack
#define MAXIMUM_SIZE 50
  
// Stack Object
class Stack
{
    // Private Variables
    private:
        int store[MAXIMUM_SIZE];
        int index;

    // Public Function Prototypes
    public:
        // Defaule Constructor
        Stack(void);
        // Push Item to Stack
        int push(int);
        // Pop Last Item from Stack
        int pop(void);
        // Control - Is Stack Empty?
        bool isEmpty(void);
        // Control - Is Stack Full?
        bool isFull(void);
        // Sort all items
        void sortItems(void);
        // Print all items
        void displayItems(void);

};