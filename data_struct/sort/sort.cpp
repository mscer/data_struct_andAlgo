#include "sort.h"

#include <iostream>
using namespace std;

void BubbleSort(std::vector<int> &src)
{
    if(src.empty()){
        return ; 
    }

    bool flag = true;
    for(size_t i = 0; (i < src.size()) && flag; ++i){
        flag = false; 
        for(size_t j = src.size() -1; j > i; --j){
            if(src[j] < src[j-1]){
                swap(src, j-1,j);
                flag = true;
            } 
        }
    }
    return;
}

void SelectSort(std::vector<int> &src)
{

    if(src.empty()){
        return ; 
    }

    for(size_t i = 0; i < src.size(); ++i){
        int min = i;     
        for(size_t j = i+1; j < src.size(); ++j){
            if(src[min] > src[j]){
                min = j; 
            }
        }
        if(i != min){
            swap(src, i, min);
        }
    }
    return;
}

void InsertSort(std::vector<int> &src)
{
    if(src.empty()){
        return ; 
    }

    for(size_t i = 0; i < src.size(); ++i){
        size_t j = i + 1;     
        if(j < src.size() && src[j] < src[i]){
            //insert j 
            int temp = src[j];
            for(;j > 0&&src[j-1] > temp; --j){
                src[j] = src[j-1]; 
            }
            src[j] = temp;
        }
    }
    return;
}

void QuickSort(std::vector<int> &src, int low, int high)
{
    if(low >= high){
        return; 
    }
    int mid = (low+high)/2;
    swap(src, low,mid);
    size_t last = low;
    for(size_t i = low; i < high; ++i){
        //last 始终指向最后一个小于key的位置
        if(src[i] < src[low]){
            swap(src, i, ++last);
        }
    }
    swap(src, low, last);
    QuickSort(src, low, last);
    QuickSort(src, last+1, high);
    return;
}

void HeapSort(std::vector<int> &src)
{
    //create heap
    for(int i = src.size()/2; i>=0; --i){
        HeapAdjust(src, i, src.size());
    }

    for(int i = src.size() - 1 ; i > 0; i--){
        swap(src, 0,i);
        HeapAdjust(src,0,i-1);
    }
    return;
}

void ShellSort(std::vector<int> &src)
{
    int incre = src.size();
    do{
        incre = incre/3;
        cout << incre << endl;;
        for(size_t i = incre; i < src.size(); ++i){
            int j = i + 1;     
            if(j < src.size() && src[j] < src[j-incre]){
                //insert j 
                int temp = src[j];
                for(;j > 0&&src[j-incre] > temp; j-=incre){
                    src[j] = src[j-incre]; 
                }
                if(j < 0){
                    j+= incre; 
                }
                src[j] = temp;
            }
        }
    }while(incre > 1);
    return;
}

void swap(std::vector<int> &src, int i, int j)
{
    if(src.empty()){
        return ; 
    }
    if(i >= src.size() || j >= src.size()){
        return ; 
    }
    int temp = src[i];
    src[i] = src[j];
    src[j] = temp;
}

void HeapAdjust(std::vector<int> &src,int low, int high)
{
    int mid; 
    int temp = src[low];
    for(mid = 2*low; mid < high; mid*=2){
        if(0 == mid){
            mid = 1;
        }
        if((mid+1) < high &&src[mid+1] > src[mid]) {
            mid++; 
        }
        if(src[mid] < src[low]){
            break; 
        }
        swap(src, low,mid);
        low = mid;
    }
    src[low] = temp;
}
