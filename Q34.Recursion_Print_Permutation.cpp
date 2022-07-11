#include <bits/stdc++.h>
using namespace std;

void permutation(string str, string osf){
	// int n = str.size();
	if(str.size() == 0){
		cout<<osf<<endl;
		return;
	}
	for (int i = 0; i < str.size(); ++i)
	{
		string ss = str.substr(0,i) + str.substr(i+1);
		permutation(ss, osf + str[i]);
	}
}

int main(){
	string str;
	cin>>str;
	permutation(str, "");
}