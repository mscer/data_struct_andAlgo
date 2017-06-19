#ifndef SQ_LIST_H
#define SQ_LIST_H

#define MAXSIZE 100
#include <cstddef>

typedef int ElemType;

typedef struct{
    ElemType data[MAXSIZE];
    size_t len;

}SqList;

//get 
bool getElem(SqList *l, size_t i, ElemType &e);

//insert
bool insert(SqList *l, size_t i, ElemType e);

//erase
bool erase(SqList *l, size_t i, ElemType &e);

#endif
