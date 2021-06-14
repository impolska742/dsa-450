#include<bits/stdc++.h>
using namespace std;

pair<int,int> linearSearch(vector<int> arr) {
	int mx, mn;
	mx = INT_MIN;
	mn = INT_MAX;

	for(auto x : arr) {
		if(x > mx) {
			mx = x;
		}

		if(x < mn) {
			mn = x;
		}
	}

	return {mx, mn};
}

int main(int argc, char const *argv[])
{
	vector<int> arr = { 1000, 11, 445, 1, 330, 3000 };
	cout << linearSearch(arr).first << " " << linearSearch(arr).second << endl;
	return 0;
}