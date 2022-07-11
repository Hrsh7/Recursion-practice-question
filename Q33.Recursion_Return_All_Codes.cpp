#include <bits/stdc++.h>
using namespace std;

void AllCodes(string str, int i, string osf, vector<char>& chars){
	if( i == str.length()){
		cout<<osf<<endl;
		return;
	}
	if(i > str.length()){
		return;
	}
	if(i == str.length() - 1){
		AllCodes(str, i + 1, osf+chars[str[i] - '0'], chars);
	}
	else{
		AllCodes(str, i + 1, osf+chars[str[i] - '0'], chars);
		AllCodes(str, i+2, osf+chars[(str[i] - '0') * 10 + (str[i+1] - '0')], chars);
		
	}
}

int main(){
	string str;
	cin>>str;
	// string osf;
	vector<char> chars = {'.','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o'
	,'p','q','r','s','t','u','v','w','x','y','z'};
	AllCodes(str, 0, "",  chars); 
}