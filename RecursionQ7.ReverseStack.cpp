#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int val){
	// New Problem
	//2. base case
	if(st.size() == 0){
		st.push(val);
		return;
	}
	//1.Hypothesis
	int ele = st.top();
	st.pop();
	insert(st,val);
	//3.Induction step
	st.push(ele);
	return;
}

void reverse(stack<int> &st){
	//2. base case
	if(st.size()==1){
		return ;
	}
	//1.Hypothesis: make i/p smaller
	int val = st.top();
	st.pop();
	reverse(st);
	//Induction step: insert val in right positon i.e bottom of the stack
	insert(st,val);
	return;
}

stack<int> reverseStack(stack<int> &st){
	//Edge condition
	if(st.size() == 0){
		return st;
	}
	reverse(st);
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
	// int s= st.size();
	reverseStack(st);
	while(!st.empty()){
		cout<<" "<<st.top();
		st.pop();
	}
}