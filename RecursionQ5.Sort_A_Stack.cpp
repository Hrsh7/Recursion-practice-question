#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int temp){
	//base condition
	if(st.size() == 0 || st.top()<=temp){
		st.push(temp);
		return;
	}
	// Hypothesis
	int val = st.top();
	st.pop();
	insert(st,temp);
	st.push(val);
	return;
}

void sort_stack(stack<int> &st){
	// base condition
	if(st.size()==1){
		return;
	}
	//Hypothesis
	int temp = st.top();
	st.pop();
	sort_stack(st);
	//Induction step
	insert(st,temp);
	return;
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
	sort_stack(st);
	while(!st.empty()){
		cout<<" "<<st.top();
		st.pop();
	}
}