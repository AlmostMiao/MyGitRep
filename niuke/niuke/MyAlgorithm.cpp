#include "MyAlgorithm.h"
#include<iostream>


MyAlgorithm::MyAlgorithm(void)
{
}


MyAlgorithm::~MyAlgorithm(void)
{
}

int MyAlgorithm::HuiwenNumber(int n,int res){
	if(n<10)
		return 10*res+n;
	res=10*res+n%10;
	return HuiwenNumber(n/10,res);

}

void MyAlgorithm::SelectSort(int a[],int n){
	
	for(int i=0;i<n-1;i++){
		int k=i;
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				k=j;
			}
		}
		int t=a[i];
		a[i]=a[k];
		a[k]=t;
	}
}

bool MyAlgorithm::CheckSam(string stringA,string stringB){	    
        // write code here
        int lenA=stringA.size(),lenB=stringB.size();
        if(lenA!=lenB)
            return false;
        bool res=true;
        int arrA[128],arrB[128];
        for(int i=0;i<lenA;i++){
            arrA[stringA[i]]++;
            arrB[stringB[i]]++;
        }
        for(int i=0;i<128;i++){
            if(arrA[i]!=arrB[i]){
                res=false;
                break;
            }
        }
        return res;
    }

int MyAlgorithm::MaxValue(int a[][4]){
	int max_value=a[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if(max_value<a[i][j])
				max_value=a[i][j];
		}
	}
	return max_value;
}

void MyAlgorithm::SwapAB(int *p1,int *p2){	
	if(*p1>*p2)
	{
		int temp;
		temp=*p1;
		*p1=*p2;
		*p2=temp;
		//以下代码会出错，temp指向a，但a的值变为了b的值，故结果为a的值与b的值相同
		//int *temp;
		//temp=p1;
		//*p1=*p2;
		//*p2=*temp;
	}
}

void MyAlgorithm::PrintArray(int *p,int n){
	for(int i=0;i<n;i++)
	{
		std::cout<<*p<<" ";
		p++;
	}
	std::cout<<endl;
}

void MyAlgorithm::SortString(char *name[],int n){
	char *t;
	for (int i = 0; i < n-1; i++)
	{
		int k=i;
		for (int j = i+1; j  < n; j ++)
		{
			
		}

	}
	
}

void MyAlgorithm::PrintString(char *name[],int n){	
	for (int i = 0; i < n; i++)
	{
		std::cout<<name[i]<<endl;

	}
	
}

/******************************【Sort】******************************/
void MyAlgorithm::ShellSort(int arr[],int len)
{	
	for(int gap=len/2;gap>0;gap/=2)
	{
		for(int i=gap;i<len;i++)
		{
			int j=i;
			int curValue=arr[i];
			while(j-gap>=0&&curValue<arr[j-gap]){
				arr[j]=arr[j-gap];
				j=j-gap;
			}
			arr[j]=curValue;
		}
	}

	    

}

void MyAlgorithm::MergeSort(int arr[],int left, int right)
{
	
	if(left>=right) return;
	int mid=(left+right)/2;
	MergeSort(arr,left,mid);
	MergeSort(arr,mid+1,right);
	Merge(arr,left,right);
}
void MyAlgorithm::Merge(int arr[],int left,int right)
{
	int len=right-left+1;
	int* temp=new int[len];
	int mid=(left+right)/2;
	int index=0;
	int l=left,r=mid+1;
	while(l<=mid&&r<=right)
	{
		if(arr[l]<=arr[r]) 
			temp[index++]=arr[l++];
		else
			temp[index++]=arr[r++];
	}
	while(l<=mid)
		temp[index++]=arr[l++];
	while(r<=right)
		temp[index++]=arr[r++];
	for(int i=0;i<len;i++)
		arr[left+i]=temp[i];
	delete[] temp;
}

int MyAlgorithm::Partition(int arr[],int left,int right)
{
	int pivot=arr[right];
	int index=left;
	for(int i=left;i<right;i++)
	{
		if(arr[i]<pivot)
		{
			SwapIJ(arr[i],arr[index]);
			index++;
		}
	}
	SwapIJ(arr[index],arr[right]);
	PrintArray(arr,9);
	return index;
}

void MyAlgorithm::QuickSort(int arr[],int left,int right)
{
	if(left>=right) return;
	int part=Partition(arr,left,right);
	QuickSort(arr,left,part-1);
	QuickSort(arr,part+1,right);
}

void MyAlgorithm::SwapIJ(int &i,int &j)
{
	int t=i;
	i=j;
	j=t;
}

void MyAlgorithm::swapArrayIJ(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}


void MyAlgorithm::HeapSort(int arr[],int len)
{
	for(int i=len/2-1;i>=0;i--)
	{
		BuildHeap(arr,i,len);
	}
	for(int j=len-1;j>0;j--)
	{
		swapArrayIJ(arr,0,j);
		BuildHeap(arr,0,j);
	}

}

void MyAlgorithm::BuildHeap(int arr[],int i,int len)
{
	int curValue=arr[i];
	for(int k=2*i+1;k<len;k=2*k+1)
	{
		if(k+1<len&&arr[k]<arr[k+1])
			k++;
		if(arr[k]>curValue)
		{
			arr[i]=arr[k];
			i=k;
		}
		else 
			break;
	}
	arr[i]=curValue;
}

void MyAlgorithm::CountingSort(int arr[],int m,int len)
{
	int bucketLen=m+1;
	int*countArray=new int[bucketLen];
	int sortedIndex=0;
	for(int i=0;i<bucketLen;i++)
		countArray[i]=0;
	for(int i=0;i<len;i++)
	{
		countArray[arr[i]]++;
	}
	for(int i=0;i<bucketLen;i++)
	{
		while(countArray[i]>0)
		{
			arr[sortedIndex++]=i;
			countArray[i]--;
		}

	}
}

void MyAlgorithm::BucketSort(int arr[],int len,int bucketSize)
{
	int maxValue=arr[0],minValue=arr[0];
	for(int i=0;i<len;i++)
	{
		if(arr[i]>maxValue) 
			maxValue=arr[i];
		else if(arr[i]<minValue)
			minValue=arr[i];
	}
	cout<<"maxValue: "<<maxValue<<endl;
	cout<<"minValue: "<<minValue<<endl;
	int bucketCount=(maxValue-minValue)/bucketSize+1;
	vector<vector<int>> bucket;
	for(int i=0;i<bucketCount;i++)
	{
		vector<int> temp;
		bucket.push_back(temp);
	}
	for(int i=0;i<len;i++)
	{
		int bucketIndex=(arr[i]-minValue)/bucketSize;
		bucket[bucketIndex].push_back(arr[i]);
	}
	int index=0;
	for(int i=0;i<bucket.size();i++)
	{
		sort(bucket[i].begin(),bucket[i].end());
		for(int j=0;j<bucket[i].size();j++)
			arr[index++]=bucket[i][j];
	}
}