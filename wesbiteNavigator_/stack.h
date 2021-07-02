/****************************************************************************************************************************
Title        : stack.h
Author       : Lanique Peterson
Description  : Header file for the Stack class
****************************************************************************************************************************/
#ifndef STACK_H
#define STACK_H
/* implement a fully functional queue using struct StackNode aand define the constructor */

#include <string>

struct StackNode 
{
    StackNode(std::string site){ ///will set the website to the provided string.
    }
    std::string website;
    StackNode* prev; // This is the same as a next pointer.
    //This is named prev because it should point to the "prev" node or item in a stack
};

class Stack{
    public:
        /**
        * Default Constructor 
        * @param  None
        * @return None
        */
        Stack();

        /**
        * @param  Site Given a string value, create a StackNode and push it to top of the stack
        * @return Returns a pointer to the created StackNode
        */
        StackNode* push(std::string site);

        /**
        * @param  None
        * @return Returns a pointer to the top StackNode, if nothing is in the stack returns NULL
        *         The return StackNode should be removed from the stack
        * Note: Do not delete the returning node, for this project assume the caller will handle the deletion of the returned node.
        */
        StackNode* pop();

        /**
        * @param  None
        * @return Returns a pointer to the top element if exists, returns NULL if there is no element on top
        *         The StackNode on topshould not be removed from the stack
        */ 
        StackNode* top();

        /**
        * @param  None
        * @return Returns the size of the stack
        */
        int getSize();

        /**
        * Should clear the stack
        * @param  None
        * @return None
        */
        void makeEmpty();

       
        /**
        * Deconstructor - Should empty the stack
        * @param  None
        * @return None
        */
        ~Stack();

};
#endif
