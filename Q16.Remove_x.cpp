// Ip: xaxb   Op: ab
// Ip: abc    Op: abc
// Ip: xx     Op: 
#include <bits/stdc++.h>
using namespace std;

string removeX(string str, int i, string ans, int l){
	if(i == l){
		return ans;
	}
	if(str[i] == 'x'){
		return removeX(str, i+1, ans+"", l);
	}
	else{
		return removeX(str, i+1, ans+str[i], l);
	}
}

int main(){
	string str;
	cin>>str;
	int l =str.size();
	cout<<removeX(str, 0, "", l);
}