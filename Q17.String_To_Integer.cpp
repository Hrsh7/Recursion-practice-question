// Ip: 123  (string)
/// op: 123 (integer)
#include <bits/stdc++.h>
using namespace std;

int stringToInteger(string str, int n){
	if(n == 0){
		return (str[0] - '0');
	}
	double smallInput = stringToInteger(str, n-1);
	double output = smallInput * 10 + (str[n] - '0');
	return int(output);
}

int main(){
	string str;
	cin>>str;
	int n = str.length();
	// cout<<c;
	int result = stringToInteger(str, n-1);
	// cout<<typeid(result).name()<<endl;
	cout<<result;
}