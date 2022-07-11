#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int ele){
	// step 1: base case : if vector is empty or last element of vector is less than
	// or equal to ele then simply pushback that ele inside vector
	if(v.size()==0 || v[v.size()-1]<=ele){
		v.push_back(ele);
		return;
	} 
	// step 2 : Hypothesis make i/p small
	int lst_ele=v[v.size()-1];
	v.pop_back();
	insert(v,ele);
	// induction step: then simply push_back lst_ele
	v.push_back(lst_ele);
	return;
}

void sort(vector<int> &v){
	// step 1: Base case when array size is 1
	if(v.size()==1){
		return;
	}
	// step 2: hypothesis step make input small
	int ele=v[v.size()-1];
	v.pop_back();
	sort(v);
	// step 3: induction step
	insert(v,ele);
}

int main(){
	vector<int> v={3,2,5,1,6};
	sort(v);
	for(int i=0;i<5;i++){
		cout<<v[i]<<endl;
	}
}