#include<iostream>
#include"Heap.h"
#include"HeapSort.h"
#include"PriorityQueue.h"
using namespace std;

void main() {
	int array[20] = { 4,1,3,2,16,9,10,14,8,7 };
	int len = 10;

	MakeMaxHeap(array, len);
	cout << "创建最大堆：" << endl;
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "堆顶元素为：" ;
	cout<< HeapTopItem(array, len)<<endl;
	
	cout << "取出堆顶元素" << HeapExtractMax(array, len) << "后：" << endl;
	for (int i = 0; i < len;++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "队尾元素的值增大为18后：" << endl;
	HeapIncreaseKey(array, len, len - 1, 18);
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	MaxHeapInsert(array, len, 20);
	cout << "队列中插入元素20后：" << endl;
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	MakeMinHeap(array, len);
	cout << "创建最小堆：" << endl;
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "堆顶元素为：";
	cout << HeapTopItem(array, len) << endl;

	cout << "取出堆顶元素" << HeapExtractMin(array, len) << "后：" << endl;
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "队尾元素的值减小为0后：" << endl;
	HeapDecreaseKey(array, len, len - 1, 0);
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "队列中插入元素5后：" << endl;
	MinHeapInsert(array, len, 5);
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "堆排序后：" << endl;
	HeapSort(array, len);
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;
}