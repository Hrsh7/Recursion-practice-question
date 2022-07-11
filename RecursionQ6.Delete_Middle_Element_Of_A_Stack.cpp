#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &st, int k){
	//base condition: if k ==1 then delete this element from stack and return
	if(k == 1){
		st.pop();
		return;
	}
	//Hypothesi: store top element
	int ele = st.top();
	st.pop();
	solve(st,k-1);
	st.push(ele);
	return;
}

stack<int> midDel(stack<int> &st,int size){
	//Edge condition
	if(st.size() == 0){
		return st;
	}
	int k= size/2 +1;
	solve(st,k);
	return st;
}

int main(){
	stack<int> st;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin>>num;
		st.push(num);
	}
	int s= st.size();
	midDel(st,s);
	while(!st.empty()){
		cout<<" "<<st.top();
		st.pop();
	}
}