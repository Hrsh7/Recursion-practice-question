// IP: 243676
// OP: 28
#include <bits/stdc++.h>
using namespace std;

int digitSum(int n, int sum){
	if(n == 0){
		return sum;
	}
	return digitSum(n/10, sum + (n%10));
}

int main(){
	int n;
	cin>>n;
	cout<<digitSum(n, 0);
}