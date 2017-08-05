#include "sort.h"
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> data;
    //prepare data
    for(size_t i = 5;i < 10; i++){
        data.push_back(i);
    }
    for(size_t i = 0;i < 5; i++){
        data.push_back(i);
    }
    cout << "src_ data" << endl;
    for(vector<int>::iterator it = data.begin(); it != data.end(); ++it){
        cout << "value->\t"  << *it << endl;
    }

    //sort  stage

    //swap(data, 1,5);
    //BubbleSort(data);
    //SelectSort(data);
    //InsertSort(data); 
    //QuickSort(data,0, data.size());
    //ShellSort(data);
    HeapSort(data);
    cout << "after sort" << endl;
    for(vector<int>::iterator it = data.begin(); it != data.end(); ++it){
        cout << "value->\t"  << *it << endl;
    }
     
}
