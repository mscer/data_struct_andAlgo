#include "LinkStack.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    LinkStackPtr lsp = (LinkStackPtr)malloc(sizeof(Node));
    lsp->next = NULL;
    lsp->data = 0;

    cout << "after push" << endl;
    for(size_t i = 0; i < 5; ++i){
        push(lsp, i); 
    }
    NodePtr p = lsp->next;
    while(p != NULL){
        cout << "value\t" << p->data << endl;;
        p = p->next;
    }

    cout << "after pop" << endl;
    for(size_t i = 0; i < 3; ++i){
        int e;
        pop(lsp, e); 
    }
    p = lsp->next;
    while(p != NULL){
        cout << "value\t" << p->data << endl;
        p = p->next;
    }

}
