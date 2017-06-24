#ifndef LINK_STACK_H
#define LINK_STACK_H

#include <cstddef>

typedef struct Node{
    int data;
    struct Node *next;
} *NodePtr;

typedef struct Node*  LinkStackPtr;


bool push(LinkStackPtr lsp, int e);

bool pop(LinkStackPtr lsp, int &e);
#endif
