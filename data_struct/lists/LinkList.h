#ifndef LINKLIST_H
#define LINKLIST_H

#include <cstddef>
#define ElemType int

typedef struct Node{
   ElemType data;
   struct Node* next;
}  Node ;

typedef struct  Node *LinkListPtr;

bool getElem(LinkListPtr ll, size_t i, ElemType &e);

bool insert(LinkListPtr ll, size_t i,ElemType e);

bool erase(LinkListPtr ll, size_t i, ElemType &e);

//malloc and free

#endif

