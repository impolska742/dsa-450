#include<bits/stdc++.h>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {	    
	vector<int> answer;
	for(int i = 0; i < n; i++) {
		if(i+1 == arr[i]) {
			answer.push_back(arr[i]);
		}
	}

	return answer;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1};
	int n = 1;
	for(auto num : valueEqualToIndex(arr, n)) {
		cout << num << endl;
	}
	// cout << valueEqualToIndex(arr, n).size();
	return 0;
}