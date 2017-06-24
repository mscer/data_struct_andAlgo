#include "SqStack.h"

bool push(SqStackPtr ss, int e)
{
    if((ss->top + 1) >= MAXSIZE){
        return false; 
    }
    ss->data[ss->top++] = e;
    return true;
}


bool pop(SqStackPtr ss, int &e)
{
    if(ss->top < 0){
        return false; 
    }
    e = ss->data[--ss->top];
    return true;
}
