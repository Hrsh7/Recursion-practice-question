// Sample Input :
// 4
// 9 8 10 8
// 8

// Sample Output :
// // 3
// #include <bits/stdc++.h>
// using namespace std;

// int LastIndex(int arr[], int n, int k, int ans){
// 	if(n == 0){
// 		return -1;
// 	}
// 	if(arr[n - 1] == k){
// 		return ans;
// 	}
// 	return LastIndex(arr, n-1, k, ans-1);
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>arr[i];
// 	}
// 	int k;
// 	cin>>k;
// 	cout<<LastIndex(arr, n, k, n-1);
// }


// method 2:
#include <bits/stdc++.h>
using namespace std;

int LastIndex(int arr[], int n, int k, int ans){
	if(n == 0){
		return 0;
	}
	
    LastIndex(arr+1, n-1, k, ans+1);
    if(arr[0] == k){
    	return ans;
    }
    else{
    	return 0;
    }
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
	cout<<LastIndex(arr, n, k, 0);
}
