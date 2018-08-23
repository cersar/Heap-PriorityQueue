#include<iostream>
#include"Heap.h"
#include"HeapSort.h"
#include"PriorityQueue.h"
using namespace std;

void main() {
	int array[20] = { 4,1,3,2,16,9,10,14,8,7 };
	int len = 10;

	MakeMaxHeap(array, len);
	cout << "�������ѣ�" << endl;
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "�Ѷ�Ԫ��Ϊ��" ;
	cout<< HeapTopItem(array, len)<<endl;
	
	cout << "ȡ���Ѷ�Ԫ��" << HeapExtractMax(array, len) << "��" << endl;
	for (int i = 0; i < len;++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "��βԪ�ص�ֵ����Ϊ18��" << endl;
	HeapIncreaseKey(array, len, len - 1, 18);
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	MaxHeapInsert(array, len, 20);
	cout << "�����в���Ԫ��20��" << endl;
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	MakeMinHeap(array, len);
	cout << "������С�ѣ�" << endl;
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "�Ѷ�Ԫ��Ϊ��";
	cout << HeapTopItem(array, len) << endl;

	cout << "ȡ���Ѷ�Ԫ��" << HeapExtractMin(array, len) << "��" << endl;
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "��βԪ�ص�ֵ��СΪ0��" << endl;
	HeapDecreaseKey(array, len, len - 1, 0);
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "�����в���Ԫ��5��" << endl;
	MinHeapInsert(array, len, 5);
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;

	cout << "�������" << endl;
	HeapSort(array, len);
	for (int i = 0; i < len; ++i) {
		cout << array[i] << "\t";
	}
	cout << endl;
}