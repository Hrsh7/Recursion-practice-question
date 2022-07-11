// // IP : "abc"
// #include <bits/stdc++.h>
// using namespace std;

// int subs(string input, string output[]){
// 	if(input.empty()){
// 		output[0] = "";
// 		return 1;
// 	}
// 	string smallInput = input.substr(1);
// 	int smallOutputSize = subs(smallInput, output);
// 	for (int i = 0; i < smallOutputSize; ++i)
// 	{
// 		output[i + smallOutputSize] = input[0] + output[i];
// 	}

// 	return 2 * smallOutputSize;
// }

// int main(){
// 	string input ;
// 	cin>>input;
// 	string* output = new string[1000];
// 	int count = subs(input, output);
// 	for (int i = 0; i < count; ++i)
// 	{
// 		cout<<output[i]<<endl;
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;


void subsequence(string str, int i, string osf, vector<string>& combs){
	if(i == str.size()){
	 combs.push_back(osf);
	 return;
	}
	subsequence(str, i+1, osf, combs);
	subsequence(str, i+1, osf + str[i], combs);
}

vector<string> return_subsequence(string str){
	if(str.size() == 0){
		return {};
	}
	vector<string> combs;
	string builder;
	subsequence(str, 0, builder, combs);
	return combs;
}

int main(){
	string str;
	cin>>str;
	vector<string> ans = return_subsequence(str);
	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<endl;
	}
	cout<<endl;
}   

