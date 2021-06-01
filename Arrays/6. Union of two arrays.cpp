#include "useful.h"

// 1 2 3 4 5
// 1 2 3

int usingSets(int arr1[], int n, int arr2[], int m) {
	set <int> s;
	for (int i = 0; i < n; i++) {
		s.insert(arr1[i]);
	}

	for (int i = 0; i < m; i++) {
		s.insert(arr2[i]);
	}

	return s.size();
}

int main(int argc, char const *argv[])
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 3};
	int n = sizeof(arr1) / sizeof(arr1[0]);
	int m = sizeof(arr2) / sizeof(arr2[0]);
	cout << usingSets(arr1, n, arr2, m) << endl;
	return 0;
}