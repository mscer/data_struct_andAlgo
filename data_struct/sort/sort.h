#ifndef SORT_H
#define SORT_H
#include <vector>

void BubbleSort(std::vector<int> &src);
void SelectSort(std::vector<int> &src);
void InsertSort(std::vector<int> &src);


void QuickSort(std::vector<int> &src, int low, int high);
void ShellSort(std::vector<int> &src);

void HeapSort(std::vector<int> &src);

void MeregeSort(std::vector<int> &src, int low, int high);

void HeapAdjust(std::vector<int> &src,int low, int high);
void swap(std::vector<int> &src, int i, int j);

#endif
