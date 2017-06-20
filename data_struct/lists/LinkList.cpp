#include "LinkList.h"
#include <stdlib.h>
#include <iostream>
//malloc and free
bool getElem(LinkListPtr ll, size_t i, ElemType &e)
{
    if(i < 1 || ll->next == NULL){
        return false;
    }
    Node* p = NULL; 
    p = ll;
    size_t j = 0;
    while(j < i){
        p = p->next; 
        if(p == NULL){
            return false; 
        }
        j++;
    }
    e = p->data;
    return true;
}

bool insert(LinkListPtr ll, size_t i,ElemType e)
{
    if(i < 1){
        return false; 
    }
    Node *p = NULL;
    p = ll;
    size_t j = 0;
    while(j < i-1){
         p = p->next;
         if(NULL == p){
            return false; 
         }
         j++;
    }
    Node *q = (Node*) malloc(sizeof(Node));

    q->data = e;
    q->next = p->next;
    p->next = q;
    return true;
}

bool erase(LinkListPtr ll, size_t i, ElemType &e)
{
    if(i < 1){
        return false;
    }
    Node * p = NULL;
    p = ll;
    size_t j = 0;
    while(j < i -1){
        p = p-> next; 
        if(NULL == p){
            return false; 
        }
        j++;
    }
    Node * q = NULL;
    q =  p->next;
    p->next = p->next->next;
    e = q->data;
    free(q);
    return true;
}
