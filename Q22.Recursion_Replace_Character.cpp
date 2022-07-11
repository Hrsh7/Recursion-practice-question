// Sample Input :
// abacd
// a x

// Sample Output :
// xbxcd
#include <bits/stdc++.h>
using namespace std;

void replace(char s[], char c, char d){
	if(s[0] == '\0'){
		return;
	}
	if(s[0] == c){
		s[0] = d;
		replace(s+1, c, d);
	}
	else{
		replace(s+1, c, d);
	}
}

int main(){
	char str[200];
	cin>>str;
	char c,d;
	cin>>c>>d;
	replace(str, c, d);
	cout<<str<<endl;
}