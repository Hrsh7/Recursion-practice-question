#include <bits/stdc++.h>
using namespace std;

double GeometricSum(int k){
	if(k == 0){
		return 1;
	}
	// int a = GeometricSum(k-1);
	// int ans = a + (1/(pow(2,k)));
	// return ans;
	return GeometricSum(k-1) + 1/(double)pow(2,k);
}

int main(){
	int k;
	cin>>k;
	cout<<GeometricSum(k);
}