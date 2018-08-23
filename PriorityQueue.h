#pragma once
void MaxHeapInsert(int Q[], int &len, int item);
int HeapTopItem(int Q[], int len);
int HeapExtractMax(int Q[],int &len);
void HeapIncreaseKey(int Q[], int len, int i, int key);
void MinHeapInsert(int Q[], int &len, int item);
int HeapExtractMin(int Q[], int &len);
void HeapDecreaseKey(int Q[], int len, int i, int key);