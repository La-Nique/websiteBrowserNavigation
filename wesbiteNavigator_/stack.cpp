/****************************************************************************************************************************
Title        : stack.cpp
Author       : Lanique Peterson
Description  : Implementation file for the Stack class
****************************************************************************************************************************/

#include "stack.h"

Stack::Stack()
{
    start = nullptr;
    size = 0;
}

StackNode* Stack::push(std::string site)
{
    size++;
    StackNode* newNode = new StackNode(site);
    newNode->prev = start;
    start = newNode;
    
    return newNode;
}

StackNode* Stack::pop()
{
    if(start == nullptr)
        return nullptr;
    else
    {
        StackNode* newNode = start;
        start = start->prev;
        size--;
        return newNode;
    }
}

StackNode* Stack::top()
{
    if(start == nullptr)
        return nullptr;
    else
        return start;
}

int Stack::getSize()
{
    return size;
}

void Stack::makeEmpty()
{
    StackNode* currentNode = start, *prev;
    
    while(currentNode != nullptr)
    {
        prev = currentNode;
        currentNode = currentNode->nullNode;
        delete prev;
    }
    
    start = nullptr;
    size = 0;
}

Stack::~Stack()
{
    makeEmpty();
}

