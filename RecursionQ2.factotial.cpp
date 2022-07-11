#include <bits/stdc++.h>
using namespace std;

int factorial_N(int n){
	// base case: smallest valid i/p
	if(n==0 || n==1){
		return n;
	}
	return n*factorial_N(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<factorial_N(n);
} 
