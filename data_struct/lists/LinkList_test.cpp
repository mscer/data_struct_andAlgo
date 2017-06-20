#include "LinkList.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    //creat LinkList
    LinkListPtr ll;
    ll = (Node*)malloc(sizeof(Node));
    ll->data = 0;
    ll->next = NULL;
    
    //insert
    cout << "after insert" << endl;
    for(size_t i = 0; i < 6; ++i){
        insert(ll, 1, i); 
    }
    Node * p = ll;
    while(p != NULL){
        p = p->next;
        if(NULL != p){
            cout << "value" << p->data << endl;
        }
    }

    cout << "after erase" << endl;
    for(size_t i = 0; i < 4; ++i){
        ElemType e;
        erase(ll, 1, e); 
    }
    p = ll;
    while(p != NULL){
        p = p->next;
        if(NULL != p){
            cout << "value" << p->data << endl;
        }
    }

}
