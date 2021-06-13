#include <bits/stdc++.h>
using namespace std;


// Time Complexity => O(N)
// Space Complexity => O(1)
pair<int, int> firstAndLast(vector<int> arr, int n, int x) {
	int first, last;
	first = last = -1;
	for(int i=0;i<n;i++ ) {
		if(arr[i] == x) {
			first = i;
			break;
		}
	}

	int index = first;
	while(arr[index] == x) {
		last = index;
		index++;
	}

	return {first, last};
}

pair<int, int> firstAndLastBetter(vector<int> arr, int n, int x) {
	int first, last;
	first = last = -1;

	int lo, mid, hi;
	lo = 0;
	hi = n - 1;
	while(lo <= hi) {
		mid = (lo + hi)/2;
		if(arr[mid] == x) {
			first = mid;
			hi = mid - 1;
		} else if(arr[mid] > x) {
			hi = mid -1;
		} else {
			lo = mid + 1;
		}
	}

	lo = 0;
	hi = n-1;
	while(lo <= hi) {
		mid = (lo + hi)/2;
		if(arr[mid] == x) {
			last = mid;
			lo = mid + 1;
		} else if(arr[mid] > x) {
			hi = mid -1;
		} else {
			lo = mid + 1;
		}
	}

	return {first, last};
}

int main(int argc, char const *argv[])
{

// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n = 9;
	int x = 5;
	vector<int> arr = {1,3,5,5,5,5,67,123,125};
	cout << firstAndLastBetter(arr, n, x).first << " " << firstAndLastBetter(arr, n, x).second;
	return 0;
}


/*
	Input:
	n=9, x=5
	arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
*/