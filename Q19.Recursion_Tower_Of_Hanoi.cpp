#include <bits/stdc++.h>
using namespace std;

void TOH(int k, char a, char c, char b){
	if(k==1){
		cout<<a<<" "<<c<<endl;
		return;
	}
	TOH(k-1, a, b, c);
	cout<<a<<" "<<c<<endl;
	TOH(k-1, b, c, a);
}

int main(){
	int k;
	cin>>k;
	// char a,b,c;
	TOH(k, 'a', 'c', 'b');
}