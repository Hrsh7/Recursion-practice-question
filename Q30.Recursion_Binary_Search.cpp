#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int si, int ei, int k){
	if(si > ei){
		return -1;
	}
	int mid = (si + ei)/2;
	if(arr[mid] == k){
		return mid;
	}
	else if(k < arr[mid]){
		binarySearch(arr, si, mid - 1, k);
	}
	else{
		binarySearch(arr, mid + 1, ei, k);
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n] = {0};
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	cout<<binarySearch(arr, 0, n-1, k);
}