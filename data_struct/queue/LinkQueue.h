#ifndef LINK_QUEUE_H
#define LINK_QUEUE_H

#include <cstddef>

typedef struct Node{
    int data;
    struct Node * next;
}*NodePtr;


typedef struct LinkQueue{
    NodePtr head;
    NodePtr tail;
} * LinkQueuePtr;


bool push(LinkQueuePtr lqp, int e);

bool pop(LinkQueuePtr lqp, int &e);

#endif
