// Sample Input :
// 4
// 9 8 10 8
// 8

// Sample Output :
// 1
#include <bits/stdc++.h>
using namespace std;

int FirstIndex(int arr[], int n, int k, int ans){
	if(n == 0){
		return -1;
	}
	if(arr[0] == k){
		return ans;
	}
	return FirstIndex(arr+1, n-1, k, ans+1);
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
	cout<<FirstIndex(arr, n, k, 0);
}