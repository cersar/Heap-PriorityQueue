#include<iostream>
#include "HeapSort.h"
#include "Heap.h"
#include "ToolFuncs.h"

using namespace std;

void HeapSort(int array[], int len)
{
	MakeMaxHeap(array, len);
	for(int i=len-1;i>0;--i){
		swap(array[0], array[i]);
		MaxHeap(array, i, 0);
	}
}
