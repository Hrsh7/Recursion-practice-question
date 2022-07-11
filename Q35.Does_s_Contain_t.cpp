#include <bits/stdc++.h>
using namespace std;

void Contain(string s, string t, int i, int j){
	if(j == t.length()){
		cout<<"true"<<endl;
		return ;
	}
	if(i == s.length() && j!= t.length()){
		cout<<"false"<<endl;
		return;
	}
	if(t[j] == s[i]){
		Contain(s, t, i+1, j+1);
	}
	else{
		Contain(s, t, i+1, j);
	}
}

int main(){
	string s,t;
	cin>>s>>t;
	Contain(s, t, 0, 0);
}