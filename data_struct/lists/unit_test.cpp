#include "SqList.h"
#include <iostream>

using namespace std;

int main(){
    SqList sl;
    sl.len = 0;

    cout << "after inert" << endl;
    for(size_t i = 0; i < 6; ++i){
        insert(&sl, 1, i);
    }
    for(size_t i = 0; i < sl.len; ++i){
        cout << "index->\t" << i << "\tvalue->\t" << sl.data[i] << endl;; 
    }


    cout << "after erase" << endl;
    ElemType e;
    for(size_t i = 0; i < 4; ++i){
        erase(&sl, 1, e);
    }
    for(size_t i = 0; i < sl.len; ++i){
        cout << "index->\t" << i << "\tvalue->\t" << sl.data[i] << endl;
    }
}
