/****************************************************************************************************************************
Title        : queue.cpp
Author       : Lanique Peterson
Description  : Implementation file for the Queue class
****************************************************************************************************************************/

#include "queue.h"

Queue::Queue()
{
    start = nullptr;
    end = nullptr;
    size = 0;
}

QueueNode* Queue::push(std::string site) ///create a QueueNode and push it to the back of the queue; then return a pointer to the created QueueNode
{
    QueueNode* newNode = new QueueNode(site);
    
        if(isEmpty() == true)
        {
            start = newNode;
            end = newNode;
            size++;
            return newNode;
        }
        else
        {
            end->prev = newNode; /// <---!! end is pointer to the address. end-> means accessing the data within the address itself
            end = newNode; ///pointing to the new end site's address
            size++;
            return newNode;
        }
}

QueueNode* Queue::pop() ///returns a pointer to the front QueueNode, if nothing is in the queue returns NULL; The return QueueNode should be removed from the queue; note: do not delete the returning node, for this project assume the caller will handle the deletion of the returned node.
{
    if(size != 0)
    {
        QueueNode* removeNode = start;
        
            if(isEmpty() == true)
                return NULL;
            else if (size == 1)
            {
                start = NULL;
                end = NULL;
                size = 0;
                return removeNode;
            }
            else
            {
                start = start->prev;
                size--;
                return removeNode;
            }
    }
    return NULL;
}

QueueNode* Queue::front()
{
    if(size == 0)
        return NULL;
    
    return start;
}

int Queue::getSize()
{
    return size;
}

void Queue::makeEmpty()
{
    while (isEmpty() == false)
        pop();
}

bool Queue::isEmpty()
{
    return size == 0;
}

Queue::~Queue()
{
    makeEmpty();
}

