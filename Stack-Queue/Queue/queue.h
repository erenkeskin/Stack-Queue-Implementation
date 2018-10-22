/*
    Hasan Eren KESKIN
    http://herenkeskin.com
    http://github.com/erenkeskin

    Queue Implementation
    v0.1
*/

// Maximum size of Queue
#define MAXIMUM_SIZE 50

// Queue Object
class Queue
{
    // Private Variables
    private:
        int store[MAXIMUM_SIZE];
        int rear;
        int front;

    // Public Function Prototypes
    public:
        // Defaule Constructor
        Queue(void);
        // Enqueue data to Queue
        void enqueue(int);
        // Dequeue data from Queue
        int dequeue(void);
        // Get size of Queue
        int size(void);
        // Control - Is Queue Empty?
        bool isEmpty(void);
        // Control - Is Queue Full?
        bool isFull(void);
        // Sort all items
        void sortItems(void);
        // Print all items
        void displayItems(void);

};
