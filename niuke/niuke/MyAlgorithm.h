#pragma once
#include<string>
#include<vector>

#include<algorithm>

using namespace std;

class MyAlgorithm
{
public:
	MyAlgorithm(void);
	~MyAlgorithm(void);

	//my algorithm
	int HuiwenNumber(int n,int res);
	//select sort
	void SelectSort(int a[],int n);
	//check wether the strings is same
	bool CheckSam(string s1,string s2);
	//max value in the array
	int MaxValue(int a[][4]);

	//swap a and b
	void SwapAB(int *p1,int *p2);

	//print the array using pointer
	void PrintArray(int *p,int n);

	// sort strings
	void SortString(char *name[],int n);
	//print string
	void PrintString(char *name[],int n);
	void ShellSort(int [],int len);
	//Merge Sort
	void Merge(int [],int left,int right);
	void MergeSort(int [], int left,int right);
	//Quick Sort
	void QuickSort(int [],int left,int right);
	int Partition(int [],int left,int right);
	//Heap Sort
	void HeapSort(int [],int len);
	void BuildHeap(int [],int i,int len);
	//Counting Sort
	void CountingSort(int [],int m,int len);
	// Bucket Sort
	void BucketSort(int [],int len,int bucketSize);


	void SwapIJ(int &a,int&b);
	void swapArrayIJ(int [], int i,int j);

	

};


