#include <bits/stdc++.h>
using namespace std;

bool checkAB(string str, int i){
	if(i == str.size()){
		return true;
	}
	if(str[i] == 'b' && str[i+2] == 'b'){
		return false;
	}
	checkAB(str, i+1);
}

int main(){
	string str;
	cin>>str;
	int result = checkAB(str, 0);
	cout<<result<<endl;
	if(result){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
}