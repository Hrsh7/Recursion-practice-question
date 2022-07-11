// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
#include <bits/stdc++.h>
using namespace std;

void solution(string& digits, string osf, int i, vector<string>& chars, vector<string>& combs){
	if(i == digits.size()){
		combs.push_back(osf);
		return;
	}
	int d = digits[i] - '0';
	for(auto c : chars[d]){
		solution(digits, osf + c, i + 1, chars, combs);
	}
}


vector<string> letterCombinations(string digits){
	if(!digits.size()){
		return {};
	}

	vector<string> combs;
	vector<string> chars = {"0", "1", "abc", "def", "ghi","jkl", "mno", "pqrs", "tuv", "wxyz"};
	string osf;
	solution(digits, osf, 0, chars, combs);
	return combs;

}

int main(){
	string digits;
	cin>>digits;
	vector<string> ans = letterCombinations(digits);
	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<endl;
	}
	cout<<endl;
}