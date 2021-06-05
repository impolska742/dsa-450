#include "useful.h"

int minmizeDifference(int arr[], int n, int k) {
	sort(arr, arr + n);

	int minimumElement = arr[0] + k;
	int maximumElement = arr[n - 1] - k;

	return (maximumElement - minimumElement);
}

int getMinDiff(int arr[], int n, int k) {
	sort(arr, arr + n);
	int min_e, max_e;
	int res = arr[n - 1] - arr[0];
	for (int i = 1; i <= n - 1; i++)
	{
		max_e = max(arr[i - 1] + k, arr[n - 1] - k);
		min_e = min(arr[0] + k, arr[i] - k);
		res = min(res, max_e - min_e);
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int k = 5;

	cout << getMinDiff(arr, arr_size, k) << endl;
	return 0;
}



// 5
// 10
// 2 6 3 4 7 2 10 3 2 1
// SORTED
// 1 2 3 4 5 6 7 8 9 10
// 1 + 5 => 6
// 10 - 5 => 5

// 1 5 8 10, k = 2

// 1 => (-1, 3)
// 5 => (3, 7)
// 8 => (6, 10)
// 10 => (8, 12)
// 13, 5, 9,