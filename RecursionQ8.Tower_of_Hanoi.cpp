#include <bits/stdc++.h>
using namespace std;

void TOH(int n,int s,int d, int h){
	//2. base case
	if(n == 1){
		cout<<"move plate "<<n<<" from "<<s<<" to"<<d<<endl;
		return;
	}
	//1.Hypothesis
	TOH(n-1,s,h,d);
	// 3. induction
	cout<<"move plate "<<n<<" from "<<s<<" to"<<d<<endl;
	TOH(n-1,h,d,s);
	return;
}

int main(){
	int n;
	cin>>n; // no. of disk
	int s=1;  // source
	int h=2;  // helper
	int d=3;  // destination
	TOH(n,s,d,h);
}