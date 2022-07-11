//using IBH method
#include <bits/stdc++.h>
using namespace std;

void print_1toN(int n){
	// base case: smallest valid i/p is 1
	if(n==1){
		cout<<n<<endl;
		return;
	}
	print_1toN(n-1); // hypothesis
	cout<<n<<endl; // Induction step
}
void print_Nto1(int n){
	if(n==1){
		cout<<n<<endl;
		return;
	}
	cout<<n<<endl;
	print_Nto1(n-1);
}

int main(){
	int n;
	cin>>n;
	print_1toN(n);
	print_Nto1(n);
    
}