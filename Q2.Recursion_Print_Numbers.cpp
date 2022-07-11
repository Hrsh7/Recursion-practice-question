// IP: 4
// OP : 1 2 3 4
#include <bits/stdc++.h>
using namespace std;

void print(int n){
	if(n == 1){
		cout<<1<<" ";
		return;
	}
	print(n-1);
	cout<<n<<" ";
	return;
}

int main(){
	int n;
	cin>>n;
	print(n);
}