#include<iostream>
#include "SortMethod.h"

using namespace std;

int main(int argc, char* argv[])
{
	int arr[8] = {17,3,30,25,14,17,20,9};
	int len=sizeof(arr)/sizeof(int);
	cout<<"Raw Data: ";
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//InsertSort(arr,len);
	//BinaryInsertSort(arr,len);
	//InsertSort_o(arr,len);
	//BubbleSort(arr,len);
	//QuickSort(arr,0,len-1);
	SelectSort(arr,len);
	cout<<"After Sort: ";
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}


