// Ip: 10204  //  OP: 2
#include <bits/stdc++.h>
using namespace std;

int countZeroes(long long n, int ans){
	if(n == 0){
		return ans;
	}
	if(n%10 == 0){
		return countZeroes(n/10, ans+1);
	}
	else{
		return countZeroes(n/10, ans);
	}
}

int main(){
	long long n;
	cin>>n;
	if(n==0){
		cout<<1<<" ";
	}else{
		cout<<countZeroes(n, 0);
	}
}