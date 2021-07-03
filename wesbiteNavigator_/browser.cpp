/****************************************************************************************************************************
Title        : browser.cpp
Author       : Lanique Peterson
Description  : Implementation file for the browser class
****************************************************************************************************************************/

#include "browser.h"
#include <iostream>

Browser::Browser(){
}

std::string Browser::visit(std::string website) ///return the name of the website we just visted.
{
    stack.push(website);
    queue.push(website);
    return website;
}

std::string Browser::back() ///return the webpage we land on after going back one in our history
{
    if (stack.getSize() == 1)
    {
//        StackNode* tempSite = stack.top();
        stack.pop();
        return "";
        
    }
    else if (stack.getSize() > 0)
    {
        stack.pop();
        if(stack.getSize() > 0)
        {
            StackNode* previousSite = stack.top();
            return previousSite->website;
        }
        return stack.top()->website;
    }
    else
        return "";
}

void Browser::clearSession() ///clearSession wipes our history.
{
    stack.makeEmpty();
    queue.makeEmpty();
}

std::string Browser::getHistory() ///return a string detailing our session history with the oldest visited website printing first, each website should be on own line. The last character in your string should be a new line UNLESS you had no history
{
    std::string completeHistory = "";
    Queue historyQueue;
    int counter = 0;
    
        if(queue.getSize() > 0)
        {
            QueueNode* newNode = queue.front();
    
            while(queue.getSize() > counter)
            {
                ++counter;
                if(queue.getSize() > 0)
                {
                    completeHistory += newNode->website + "\n";
    //                historyQueue.push(newNode->website);
                    newNode = newNode->prev;
                }
            }
        }
    return completeHistory;
}

std::string Browser::getCurrentWebsite() ///Returns the website the browser is currently on. If you are at a default state(No visited websites or cleared session), return empty string
{
    if (stack.getSize() > 0)
    {
        StackNode* currentWebsite = stack.top();
        return currentWebsite->website;
    }
    else
        return "";
}

Browser::~Browser()
{
    queue.makeEmpty();
    stack.makeEmpty();
}
