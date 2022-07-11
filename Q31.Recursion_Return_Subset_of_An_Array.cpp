// #include <bits/stdc++.h>
// using namespace std;

// void SubSet(int  arr[], int j, int n, string ans){
// 	if(j == n){
// 		cout<<ans<<endl;
// 		return;
// 	}
// 	SubSet(arr, j+1, n, ans);
// 	// ans.push_back(arr[j]);
// 	SubSet(arr, j+1, n, ans + to_string(arr[j]));
// 	// ans.pop_back();
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	// vector<int> arr(n,0);
// 	int arr[n];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>arr[i];
// 	}
// 	// vector<int> ans(n);
// 	string ans;
// 	SubSet(arr, 0, n, ans);
// }

#include <bits/stdc++.h>
using namespace std;

void SubSet(int  arr[], int j, int n, int ans[], int m){
	if(j == n){
		for (int i = 0; i < m; ++i)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	SubSet(arr, j+1, n, ans, m);
	ans[m] = arr[j];
	SubSet(arr, j+1, n, ans, m+1);
	// ans.pop_back();
}

int main(){
	int n;
	cin>>n;
	// vector<int> arr(n,0);
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	// vector<int> ans(n);
	int ans[n];
	SubSet(arr, 0, n, ans, 0);
}