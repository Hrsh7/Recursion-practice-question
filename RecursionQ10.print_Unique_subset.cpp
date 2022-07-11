//code is same as printsubset but here store subsets in stirng vector
#include <bits/stdc++.h>
using namespace std;
set<string> s;
void solve(string ip, string op){
	if(ip.size()==0){
		s.insert(op);
		return;
	}
	string op1=op;
	string op2=op;
	op2.push_back(ip[0]);
	// make i/p smaller
	ip.erase(ip.begin()+0);
	// now call recursively for op1 and op2
	solve(ip,op1);
	solve(ip,op2);
	return;
}

int main(){
	string ip;
	cin>>ip;
	string op = " ";
	solve(ip,op);
	for(auto x:s){
		cout<<x<<endl;
	}
	s.clear();
}  
