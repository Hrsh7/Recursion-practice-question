#include <bits/stdc++.h>
using namespace std;

int length(char s[]){
	if(s[0] == '\0'){
		return 0;
	}
	int smallerStringLength = length(s+1);
	return 1+smallerStringLength;
}

int main(){
	char str[200];
	cin>>str;
	int l = length(str);
	cout<<l<<endl;
}