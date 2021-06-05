#ifndef USEFUL

#include <bits/stdc++.h>

using namespace std;

void Display(int arr[], int n) {
	cout << "ARRAY => ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

bool allNegative(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 0) {
			return false;
		}
	}
	return true;
}

pair<int, int> minMax(int arr[], int n) {
	int minimumElement, maximumElement;
	minimumElement = INT_MAX;
	maximumElement = INT_MIN;

	// For minimum element
	for (int i = 0; i < n; i++) {
		if (arr[i] < minimumElement) {
			minimumElement = arr[i];
		}

		if (arr[i] > maximumElement) {
			maximumElement = arr[i];
		}
	}
	return make_pair(minimumElement, maximumElement);
}


int len(int n) {
	int cnt = 0;
	while (n) {
		n /= 10;
		cnt++;
	}

	return cnt;
}

#endif