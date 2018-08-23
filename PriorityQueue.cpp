#include "PriorityQueue.h"
#include "ToolFuncs.h"
#include "Heap.h"
#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

void MaxHeapInsert(int Q[], int &len, int item)
{
	len++;
	Q[len - 1] = INT_MIN;
	HeapIncreaseKey(Q, len, len - 1, item);
}

int HeapTopItem(int Q[], int len)
{
	if (len > 0) {
		return Q[0];
	}
	else {
		cout << "len <= 0 !!!" << endl;
		exit(-1);
	}
}

int HeapExtractMax(int Q[], int &len)
{
	if (len < 1) {
		cout << "len < 1 !!!" << endl;
		exit(-1);
	}
	int max = Q[0];
	swap(Q[0], Q[len - 1]);
	len--;
	MaxHeap(Q, len, 0);
	return max;
}

void HeapIncreaseKey(int Q[], int len, int i, int key)
{
	if (Q[i] > key) {
		cout << "Q[i] > key" << endl;
	}
	else {
		int parentIndex = floor(double((i - 1)) / 2);
		Q[i] = key;
		while (parentIndex >= 0 && Q[i] > Q[parentIndex]) {
			swap(Q[i], Q[parentIndex]);
			i = parentIndex;
			parentIndex = (i - 1) / 2;
		}
	}
}



void MinHeapInsert(int Q[], int &len, int item)
{
	len++;
	Q[len - 1] = INT_MAX;
	HeapDecreaseKey(Q, len, len - 1, item);
}

int HeapExtractMin(int Q[], int &len)
{
	if (len < 1) {
		cout << "len < 1 !!!" << endl;
		exit(-1);
	}
	int min = Q[0];
	swap(Q[0], Q[len - 1]);
	len--;
	MinHeap(Q, len, 0);
	return min;
}

void HeapDecreaseKey(int Q[], int len, int i, int key)
{
	if (Q[i] < key) {
		cout << Q[i] <<" < "<<key << endl;
	}
	else {
		int parentIndex = floor(double((i - 1)) / 2);
		Q[i] = key;
		while (parentIndex >= 0 && Q[i] < Q[parentIndex]) {
			swap(Q[i], Q[parentIndex]);
			i = parentIndex;
			parentIndex = floor(double((i - 1)) / 2);
		}
	}
}

void HeapIncreaseKey_NoSwap(int Q[], int len, int i, int key)
{
	if (Q[i] > key) {
		cout << "Q[i] > key" << endl;
	}
	else {
		int parentIndex = floor(double((i - 1)) / 2);
		Q[i] = key;
		while (parentIndex >= 0 && Q[parentIndex] < key) {
			Q[i] = Q[parentIndex];
			i = parentIndex;
			parentIndex = floor(double((i - 1)) / 2);
		}
		Q[i] = key;
	}
}

void HeapDecreaseKey_NoSwap(int Q[], int len, int i, int key)
{
	if (Q[i] < key) {
		cout << Q[i] << " < " << key << endl;
	}
	else {
		int parentIndex = floor(double((i - 1)) / 2);
		Q[i] = key;
		while (parentIndex >= 0 && Q[parentIndex] > key) {
			Q[i] = Q[parentIndex];
			i = parentIndex;
			parentIndex = floor(double((i - 1)) / 2);
		}
		Q[i] = key;
	}
}
