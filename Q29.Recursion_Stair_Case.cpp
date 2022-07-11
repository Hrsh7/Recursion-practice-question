// Problem Description:
// A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
// Input format :
// Integer N

// Output Format :
// Integer W

// Constraints :
// 1 <= N <= 30

// Sample Input 1 :
// 4

// Sample Output 1 :
// 7

// Sample Input 2 :
// 5

// Sample Output 2 :
// 13

#include <bits/stdc++.h>
using namespace std;

int solution(int n){
	int ans = 0;
	if(n == 0){
		ans++;
		return ans;
	}
	if(n < 0){
		return 0;
	}
	// solution(n-1);
	// solution(n-2);
	// solution(n-3);
	return solution(n-1) + solution(n-2) + solution(n-3);
	// return ans;

}

int main(){
	int n;
	cin>>n;
	if(n == 0){cout<<0<<endl;}
	else cout<<solution(n);
}