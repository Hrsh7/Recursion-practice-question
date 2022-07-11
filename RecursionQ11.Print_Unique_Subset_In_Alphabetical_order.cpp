//code is same as printsubset but here store subsets in stirng vector
#include <bits/stdc++.h>
using namespace std;
// set<string> s;
map<string,int> mp; 
int x=0;
void solve(string ip, string op){
	if(ip.size()==0){
		// mp[op]=x++;

		mp.insert({op,0});
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
	for(auto x:mp){
		cout<<x.first<<endl;
	}
	// s.clear();
}  
