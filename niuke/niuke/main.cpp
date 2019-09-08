#include<iostream>
#include<vector>
#include"MyAlgorithm.h"
#include"BinaryTree.h"

using namespace std;

int main(){

	MyAlgorithm myAlgorithm;

	//int a[5]={1,3,2,4};
	//int n=5;
	////
	//myAlgorithm.SelectSort(a,n);
	//for(int i=0;i<n;i++){
	//cout <<a[i]<<" ";
	//}
	//cout <<endl;
	//
	//string s1,s2;
	//cin>>s1>>s2;
	//if(myAlgorithm.CheckSam(s1,s2))
	//	cout<<"Two of the string is same."<<endl;
	//else
	//	cout<<"They are different."<<endl;

	////
	//int arrfmax[][4]={1,1,2,2,1,4,4,2,7,8,3,2};
	//int max_value=myAlgorithm.MaxValue(arrfmax);
	//cout <<max_value<<endl;

	////
	//int swap_a=65,swap_b=45;
	//int *p1=&swap_a,*p2=&swap_b;
	//cout<<swap_a<<" "<<swap_b<<endl;
	//myAlgorithm.SwapAB(p1,p2);
	//cout<<swap_a<<" "<<swap_b<<endl;

	////
	//int pArray[5]={1,3,2,4,5};
	//int *p=pArray;
	//myAlgorithm.PrintArray(p,5);
	//cout<<*p<<endl;
	//cout<<"*p++:"<<*p++<<endl;
	//p=pArray;
	//cout<<"*++p:"<<*++p<<endl;

	//
	char *name[4]={"C++","Python","FORTRAN","Matlab"};
	myAlgorithm.PrintString(name,4);
	myAlgorithm.SortString(name,4);
	myAlgorithm.PrintString(name,4);


	//BinaryTree
	BinaryTree* child4=new BinaryTree(4);
	BinaryTree* child5=new BinaryTree(5);
	BinaryTree* child6=new BinaryTree(6);
	BinaryTree* child7=new BinaryTree(7);	
	BinaryTree* child2=new BinaryTree(2,child4,child5);
	BinaryTree* child3=new BinaryTree(3,child6,child7);
	BinaryTree* root=new BinaryTree(1,child2,child3);

	BinaryTreeAlg b;
	b.printTree(root);
	b.cengci(root);
	b.qianxu(root);
	b.InOrderTraverse(root);

	/**********【Sort】**********/
	//vector<int> arr{1,2,4,3,5,7,8,6};//vs2012不支持参数初始化列表
	cout<<"**********Shell Sort**********"<<endl;
	int arr_shell[]={1,2,4,3,5,7,8,6,0};
	myAlgorithm.PrintArray(arr_shell,9);
	myAlgorithm.MergeSort(arr_shell,0,8);
	myAlgorithm.PrintArray(arr_shell,9);
	cout<<"**********Merge Sort**********"<<endl;
	int arr[]={1,2,4,3,5,7,8,6,0};
	myAlgorithm.PrintArray(arr,9);
	myAlgorithm.MergeSort(arr,0,8);
	myAlgorithm.PrintArray(arr,9);
	cout<<"**********Quick Sort**********"<<endl;
	int arr_quick[]={6,7,4,3,0,2,8,1,5};
	myAlgorithm.PrintArray(arr_quick,9);
	myAlgorithm.QuickSort(arr_quick,0,8);
	myAlgorithm.PrintArray(arr_quick,9);
	cout<<"**********Heap Sort**********"<<endl;
	int arr_heap[]={6,7,4,3,0,2,8,1,5};
	myAlgorithm.PrintArray(arr_heap,9);
	myAlgorithm.HeapSort(arr_heap,9);
	myAlgorithm.PrintArray(arr_heap,9);
	cout<<"**********Counting Sort**********"<<endl;
	int arr_count[]={6,7,4,3,0,2,8,1,5};
	myAlgorithm.PrintArray(arr_count,9);
	myAlgorithm.CountingSort(arr_count,8,9);
	myAlgorithm.PrintArray(arr_count,9);
	cout<<"**********Bucket Sort**********"<<endl;
	int arr_bucket[]={6,7,4,3,0,2,8,1,5};
	myAlgorithm.PrintArray(arr_bucket,9);
	myAlgorithm.BucketSort(arr_bucket,9,3);
	myAlgorithm.PrintArray(arr_bucket,9);



    return 0;
}