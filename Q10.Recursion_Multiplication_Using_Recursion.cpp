// #include <bits/stdc++.h>
// using namespace std;

// int multiplication(int m, int n, int ans){
// 	if(m == 0){
// 		return ans;
// 	}
// 	return multiplication(m-1, n, ans+n);
// }

// int main(){
// 	int m,n;
// 	cin>>m>>n;
// 	cout<<multiplication(m, n, 0);
// }

// approach 2
#include <bits/stdc++.h>
using namespace std;

int multiplication(int m, int n){
	if(m == 0){
		return 0;
	}
	int smalleroutput = multiplication(m-1, n);
	return n + smalleroutput;
}

int main(){
	int m,n;
	cin>>m>>n;
	cout<<multiplication(m, n);
}