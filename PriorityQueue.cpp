#include "PriorityQueue.h"
#include "ToolFuncs.h"
#include "Heap.h"
#include<iostream>
using namespace std;

void Insert(int Q[], int &len, int item)
{
	len++;
	IncreaseKey(Q, len, len - 1, item);
}

int Maxium(int Q[], int len)
{
	if (len > 0) {
		return Q[0];
	}
	else {
		cout << "len <= 0 !!!" << endl;
		exit(-1);
	}
}

int ExtractMax(int Q[], int &len)
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

void IncreaseKey(int Q[], int len, int i, int key)
{
	if (Q[i] > key) {
		cout << "Q[i] > key" << endl;
	}
	else {
		int parentIndex = (i - 1) / 2;
		Q[i] = key;
		while (parentIndex >= 0 && Q[i] > Q[parentIndex]) {
			swap(Q[i], Q[parentIndex]);
			i = parentIndex;
			parentIndex = (i - 1) / 2;
		}
	}
}
