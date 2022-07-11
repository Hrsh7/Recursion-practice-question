#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int s, int e){
	if(s == e || s > e) {
		return true;
	}
	if(str[s] != str[e]){
		return false;
	}
	return checkPalindrome(str, s+1, e-1);
}

int main(){
	string str;
	cin>>str;
	int n = str.length();
	// cout<<n;
	int start = 0;
	int end = n-1;
	cout<<checkPalindrome(str, start, end);
}