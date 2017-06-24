#ifndef SQ_STACK_H
#define SQ_STACK_H

#include<cstddef>

#define MAXSIZE 100

typedef struct SqStack{
    int data[MAXSIZE];
    size_t top; 
} *SqStackPtr;

bool push(SqStackPtr ss, int e);

bool pop(SqStackPtr ss, int &e);


#endif
