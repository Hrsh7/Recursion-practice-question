//IP: 3
//    9 8 10
//    8
//OP: true
#include <bits/stdc++.h>
using namespace std;

bool checkNumber(int arr[], int n, int k){
	if(n == 0){
		return false;
	}
	if(arr[0] == k){
		return true;
	}
	return checkNumber(arr+1, n-1, k);
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
	cout<<checkNumber(arr, n, k);
}