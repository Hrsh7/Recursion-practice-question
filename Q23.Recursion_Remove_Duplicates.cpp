// Sample Input 1 :
// aabccba

// Sample Output 1 :
// abcba

// Sample Input 2 :
// xxxyyyzwwzzz

#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(char s[]){
	if(s[0] == '\0'){
		return;
	}
	if(s[0] == s[1]){
		int i=2;
		for(; s[i]!='\0'; i++){
			s[i-1] = s[i];
		}
		s[i-1] = s[i];
		removeDuplicates(s);
	}
	else{
		removeDuplicates(s+1);
	}
}

int main(){
	char str[200];
	cin>>str;
	removeDuplicates(str);
	cout<<str;
}