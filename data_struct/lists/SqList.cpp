#include "SqList.h"

bool getElem(SqList *l, size_t i, ElemType &e)
{
    //check boundary
    if(i < 1 || i  > l->len || l->len == 0){
        return false; 
    }
    e = l->data[i-1];
    return true;
}

bool insert(SqList *l, size_t i, ElemType e)
{
    //check boundary
    if(l->len >= MAXSIZE){

        return false;
    }
    //check boundary
    if(i < 1 || i > l->len+ 1){
        return false; 
    } 
    //move elem
    for(int j = l->len + 1; j > i; --j) {
        l->data[j-1] = l->data[j-2];
    }
    l->data[i-1] = e;
    l->len++;
    return true;
}

bool erase(SqList *l, size_t i, ElemType &e)
{
    //check boundary
    if(l->len == 0){
        return false; 
    }else if(i < 1 || i > l->len){
        return false; 
    }
    //erase elem
    e = l->data[i-1];
    for(size_t j = i; j < l->len; --j){
        l->data[j-1] =  l->data[j];
    }
    l->len--;
    return true;
}
