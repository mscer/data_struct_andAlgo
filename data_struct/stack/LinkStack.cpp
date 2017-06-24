#include "LinkStack.h"
#include <cstdlib>


bool push(LinkStackPtr lsp, int e)
{
    NodePtr p = (NodePtr)malloc(sizeof(Node));
    p->data = e;
    p->next = NULL;
    
    //insert node
    p->next = lsp->next;
    lsp->next = p;
    return true;
}

bool pop(LinkStackPtr lsp, int &e)
{
    if(lsp->next == NULL){
        return false;
    }
    //pop node
    NodePtr q = NULL;
    q= lsp->next;
    lsp->next = q->next;
    e = q->data;
    free(q);
    return true;

}
