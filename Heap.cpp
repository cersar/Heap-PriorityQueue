#include<iostream>
#include "Heap.h"
#include "ToolFuncs.h"
using namespace std;

void MakeMaxHeap(int array[],int heapSize) {
	for (int i = heapSize / 2 - 1; i >= 0; --i) {
		MaxHeap(array, heapSize, i);
	}
	
}

void MaxHeap(int array[], int heapSize, int index) {
	int left = 2 * index + 1;
	int right = 2 * index + 2;
	int maxIndex = index;
	if (left < heapSize&&array[maxIndex] < array[left]) {
		maxIndex = left;
	}
	if (right < heapSize&&array[maxIndex] < array[right]) {
		maxIndex = right;
	}
	if (maxIndex != index) {
		swap(array[maxIndex], array[index]);
		MaxHeap(array, heapSize, maxIndex);
	}
	
}