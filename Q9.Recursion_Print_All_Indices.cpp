// Sample Input :
// 4
// 9 8 10 8
// 8

// Sample Output :
// 1 3
#include <bits/stdc++.h>
using namespace std;

void PrintIndex(int arr[], int n, int k, int ans){
	if(n == 0){
		return;
	}
	if(arr[0] == k){
		cout<< ans<<" ";
	}
	return PrintIndex(arr+1, n-1, k, ans+1);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	PrintIndex(arr, n, k, 0);
}