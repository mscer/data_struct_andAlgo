#include "sort.h"

#include <iostream>
using namespace std;

void BubbleSort(std::vector<int> &src)
{
    bool flag = true;
    for(size_t i = 0; i <src.size() && flag; ++i){
        flag = false;
        for(size_t j = src.size()-1; j > i; --j){
            if(src[j] < src[j-1]){
                flag = true;
                swap(src, j,j-1);
            } 
        }
    }
}

void SelectSort(std::vector<int> &src)
{
    for(size_t i = 0; i < src.size(); ++i){
        int min = i; 
        for(size_t j = i+1; j < src.size(); ++j){
            if(src[min] > src[j]){
                min = j;
            }
        }
        if(min != i){
            swap(src, min ,i);
        }
    }
}

void InsertSort(std::vector<int> &src)
{
    for(size_t i = 0; i < src.size(); ++i){
        int j = i+1 ;
        if(j < src.size() && src[j] < src[i]){
            int temp = src[j];
            for(; j > 0 && src[j-1]>temp; --j){
                src[j] = src[j-1]; 
            }
            src[j] =  temp;
        }
    }
}

void QuickSort(std::vector<int> &src, int low, int high)
{
    if(low >= high){
        return;
    }
    int mid = (low+high)/2;
    swap(src, low,mid);
    int last = low;
    for(size_t i = low+1; i <= high; ++i){
        if(src[i] < src[low]) {
            swap(src, i, ++last); 
        }
    }
    swap(src,low,last);
    QuickSort(src, low,last-1);
    QuickSort(src, last+1,high);
}

void ShellSort(std::vector<int> &src)
{
    //boundary check
    int incre = src.size();
    do{
        incre = incre/3;
        for(size_t i = incre; i < src.size(); ++i){
            int j = i+incre;
            if(j < src.size() && src[j] < src[i]){
                int temp = src[j];
                for(;j >0 && src[j-incre]>temp; j-= incre){
                    src[j] =  src[j-incre]; 
                }
                if(j < 0){
                    j+= incre; 
                }
                src[j] = temp;
            }
        }
    }while(incre > 1);
}

void HeapSort(std::vector<int> &src)
{
    //create heap
    for(size_t i = (src.size()-1)/2; i >=0; --i){
        HeapAdjust(src, i, src.size());
        if(0 == i){
            break;
        }
    }

    //sort by heap
    for(int i = src.size() -1 ; i >= 0 ; --i){
        swap(src,0 ,i);
        HeapAdjust(src, 0, i-1);
    }
}
void HeapAdjust(std::vector<int> &src,int low, int high)
{
    int temp = src[low];
    for(int mid = 2*low; mid < high; mid*=2){
        if(0 == mid){
            mid = 1; 
        } 
        if((mid+1) < high && src[mid+1] > src[mid]){
            mid++; 
        }
        if(src[mid] < src[low]){
            break; 
        }else{
            swap(src,low,mid);
            low = mid;
        }
    }
    src[low] = temp;
}

void swap(std::vector<int> &src, int i, int j)
{
    if(src.empty()){
        return ; 
    }
    int temp = src[i];
    src[i] =  src[j];
    src[j] = temp;
}

void MeregeSort(std::vector<int> &src, int low, int high)
{
    int m;

}
