#include "SqStack.h"
#include <iostream>

using namespace std;


int main()
{
    SqStack ss;
    ss.top = 0;
    cout << "after push" << endl;
    for(size_t i = 0; i < 5; ++i){
        push(&ss, i);
    }
    for(size_t i = 0; i < ss.top; ++i){
        cout << "index\t" << i << "\tvalue\t" << ss.data[i] << endl; 
    }

    cout << "after pop" << endl;
    for(size_t i = 0; i < 3; ++i){
        int e; 
        pop(&ss, e);
    }

    for(size_t i = 0; i < ss.top; ++i){
        cout << "index\t" << i << "\tvalue\t" << ss.data[i] << endl; 
    }
}
