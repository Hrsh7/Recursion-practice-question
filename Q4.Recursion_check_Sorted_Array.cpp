#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int n){
	if(n == 0){
		return true;
	}
	if(arr[0] > arr[1]){
		return false;
	}
	checkSorted(arr+1, n-1);
}

int main(){
	int arr[] = {2,4,5,6,19,293,873289};
	cout<<checkSorted(arr, 4);
}