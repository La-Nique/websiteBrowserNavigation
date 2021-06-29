/****************************************************************************************************************************
Title        : queue.h
Author       : Lanique Peterson
Description  : Header file for the Queue class
****************************************************************************************************************************/
#ifndef QUEUE_H
#define QUEUE_H

#include <string>

struct QueueNode{
    QueueNode(std::string site){
    }
    std::string website;
    QueueNode* prev; //This is the same as a regular next pointer.
    //This is named prev because it should point to the node behind a current node.
};

class Queue{
    public:

        /**
        * Default Constructor 
        * @param  None
        * @return None
        */
        Queue();

        /**
        * @param  Site Given a string value, create a QueueNode and push it to the back of the queue 
        * @return Returns a pointer to the created QueueNode
        */
        QueueNode* push(std::string site);

        /**
        * @param  None
        * @return Returns a pointer to the front QueueNode, if nothing is in the queue returns NULL
        *         The return QueueNode should be removed from the queue
        * Note: Do not delete the returning node, for this project assume the caller will handle the deletion of the returned node.
        */
        QueueNode* pop();

        /**
        * @param  None
        * @return Returns a pointer to the front element if exists, returns NULL if there is no element in front
        *         The QueueNode in front should not be removed from the queue
        */ 
        QueueNode* front();

        /**
        * @param  None
        * @return Returns the size of the queue
        */
        int getSize();

        /**
        * Should clear the queue
        * @param  None
        * @return None
        */
        void makeEmpty();

       
        /**
        * Deconstructor - Should empty the queue
        * @param  None
        * @return None
        */
        ~Queue();
};
#endif
