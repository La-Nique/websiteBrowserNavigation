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
    
    if(start == nullptr)
    {
        start = newNode;
        return newNode;
    }

    newNode->website = site; ///newNode start pointer will point to the requested site.
    start = newNode;
    size++;
    return newNode;
}

QueueNode* Queue::pop() ///returns a pointer to the front QueueNode, if nothing is in the queue returns NULL; The return QueueNode should be removed from the queue; note: do not delete the returning node, for this project assume the caller will handle the deletion of the returned node.
{
    if(isEmpty() == true)
        return nullptr;
    else
    {
        QueueNode* newNode = start;
        start = start->prev;
        size--;
        return newNode;
    }
}

QueueNode* Queue::front()
{
    if(start == nullptr)
        return nullptr;
    
    return start;
}

int Queue::getSize()
{
    return size;
}

void Queue::makeEmpty()
{
    QueueNode* currentSite = start;
    QueueNode* nullThisSite = nullptr;
    
    while (currentSite != nullptr) ///deletes entire queue of songs and frees from heap memory.
    {
        nullThisSite = currentSite->prev; ///our handy-dandy node crawling "counter++".
        
        delete currentSite; ///delete the current pointer and frees memory.
        currentSite = nullThisSite; ///set the deleted pointer to a nullptr.
    }
}

bool Queue::isEmpty()
{
    return size == 0;
}

Queue::~Queue()
{
    QueueNode* currentSite = start;
    QueueNode* nullThisSite = nullptr;
    
    while (currentSite != nullptr) ///deletes entire queue of songs and frees from heap memory.
    {
        nullThisSite = currentSite->prev; ///our handy-dandy node crawling "counter++".
        
        delete currentSite; ///delete the current pointer and frees memory.
        currentSite = nullThisSite; ///set the deleted pointer to a nullptr.
    }
}

