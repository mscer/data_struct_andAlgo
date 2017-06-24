#include "LinkQueue.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    LinkQueuePtr lqp = (LinkQueuePtr) malloc(sizeof(LinkQueue));
    NodePtr temp = (NodePtr) malloc(sizeof(Node));
    temp->data = 0;
    temp->next = NULL;
    lqp->head = temp;
    lqp->tail = temp;

    cout << "after push" << endl;
    for(size_t i = 0; i< 5; ++i){
        push(lqp, i); 
    }
    NodePtr p = (NodePtr) malloc(sizeof(Node));
    p = lqp->head->next;
    while(p->next != NULL){
        cout << "value\t" << p->data << endl;
        p = p->next;

    }

    cout << "after pop " << endl;
    for(size_t i = 0; i < 3; ++i){
        int e; 
        pop(lqp, e);
    }
    p = lqp->head->next;
    while(p->next != NULL){
        cout << "value\t" << p->data << endl;
        p = p->next;

    }
}

