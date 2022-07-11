#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n){
	if(n == 0){
		return 1;
	}
	int smallerInput = pow(x, n-1);
	int output = x*smallerInput;
	return output;
}

int main(){
	int x,n;
	cin>>x>>n;
	cout<<pow(x,n);
}