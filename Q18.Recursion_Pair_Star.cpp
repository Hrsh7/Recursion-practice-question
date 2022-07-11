#include <bits/stdc++.h>
using namespace std;

string pairStar(string str, int i, string ans, int l){
	if(i == l){
		return ans;
	}
	if(str[i] == str[i+1]){
		return pairStar(str, i+1, ans+str[i]+"*", l);
	}
	else{
		return pairStar(str, i+1, ans+str[i], l);
	}
}

int main(){
	string str;
	cin>>str;
	int l = str.size();
	cout<<pairStar(str, 0, "", l);
}