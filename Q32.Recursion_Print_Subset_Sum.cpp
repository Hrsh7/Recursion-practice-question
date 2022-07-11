#include <bits/stdc++.h>
using namespace std;

void return_SubsetSum(int arr[], int j, int n, int ans[], int m, int k){
	// if(sum > k){
	// 	return;
	// }
	if(j == n+1){
		return;
	}
	if(k == 0 ){
		for (int i = 0; i < m; ++i)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}

	return_SubsetSum(arr, j+1, n, ans, m, k); // not include jth element in ans array
	ans[m] = arr[j];
	return_SubsetSum(arr, j+1, n, ans, m+1, k - arr[j]); // include jth element in ans array
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
	int ans[n];
	return_SubsetSum(arr, 0, n, ans, 0, k);
}