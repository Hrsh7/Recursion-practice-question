#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &arr){
	for (int i = 0; i < arr.size(); ++i)
	{
		cin>>arr[i];
	}
}
// void print(vector<int> &arr){
// 	for (int i = 0; i < arr.size(); ++i)
// 	{
// 		cout<<arr[i];
// 	}
// 	cout<<endl;
// }

int count_smaller_element(vector<int> &arr, int pe){
	int count = 0;
	for (int i = 1; i < arr.size(); ++i)
	{
		if(arr[i] < pe){
			count++;
		}
	}
	cout<<count;
	return count;
}

int partition(vector<int> &arr, int si, int ei){
	int x = arr[0];
	int count = count_smaller_element(arr, x);
	// cout<<count;
	// swap(arr[0], arr[count]);
	int temp = arr[0];
	arr[0] = arr[count];
	arr[count] = temp;

	int i = 0;
	int j = arr.size() - 1;
	while(i < count || j > count){
		if(arr[i] < x){
			i++;
		}
		else if (arr[j] >= x){
			j++;
		}
		else{
			// swap both 
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	return count;
}

void quick_Sort(vector<int> &arr, int si, int ei){
	if(si >= ei){
		return;
	}

		int pi = partition(arr, si, ei);
		quick_Sort(arr, si, pi-1);
		quick_Sort(arr, pi+1, ei);
	
	// return arr;
}

// vector<int> quickSort(vector<int> &arr){
// 	return quick_Sort(arr, 0, arr.size() - 1);
// }

int main(){
	// create a vector array of n size with all element as 0
	int n;
	cin>>n;
	vector<int> v(n, 0);
	input(v);

	quick_Sort(v, 0, v.size() - 1);
	for (int i = 0; i < v.size() - 1; ++i)
	{
		cout<<v[i];
	}
	cout<<endl;
	return 0;
}