#include "LinkQueue.h"
#include <cstdlib>

bool push(LinkQueuePtr lqp, int e)
{
    NodePtr p = (NodePtr) malloc(sizeof(Node));
    p->data = e;
    p->next = NULL;

    //insert 
    lqp->tail->next = p;
    lqp->tail = p;
    return true;
}

bool pop(LinkQueuePtr lqp, int &e)
{
    if(lqp->head == lqp->tail){
        return false;
    }
    NodePtr p = (NodePtr) malloc(sizeof(Node));
    p = lqp->head->next;
    lqp->head->next = p->next;
    e = p->data;
    free(p);
    return true;
}
