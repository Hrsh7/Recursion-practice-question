//IP : xpip
//OP : x3.14p
#include <bits/stdc++.h>
using namespace std;

string replacePi(string str, int i, string ans, int l){
	if(i == l){
		return ans;
	}
	if(str[i] == 'p' && str[i+1] == 'i'){
		return replacePi(str, i+2, ans + "3.14", l);
	}
	else{
		return replacePi(str, i+1, ans + str[i], l);
	}
}

int main(){
	string str;
	cin>>str;
	int l = str.length();
	cout<<replacePi(str, 0, " ", l);
}