#include "useful.h"

// Time Complextiy => O(n^3)
// Space Complexity => O(1)
int naiveSolution(int arr[], int n) {
	int maxSum = 0;

	// Find ALL THE SUBARRAYS:-

	// for (int i = 0; i < n; i++) {
	// 	for (int j = i; j < n; j++) {
	// 		for (int k = i; k <= j; k++) {
	// 			cout << arr[k] << " ";
	// 		}
	// 		cout << endl;
	// 	}
	// 	cout << endl;
	// }

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int sum = 0;
			for (int k = i; k <= j; k++) {
				sum += arr[k];
			}
			if (sum > maxSum) {
				maxSum = sum;
			}
		}
	}
	return maxSum;
}

int kadaneAlgorithm(int arr[], int n) {
	int maxSum, result;
	maxSum = result = arr[0];

	for (int i = 1; i < n; i++) {
		maxSum = max(arr[i], maxSum + arr[i]);
		result = max(result, maxSum);
	}

	return result;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, -2, 5};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	Display(arr, arr_size);
	cout <<  naiveSolution(arr, arr_size) << endl;
	cout << kadaneAlgorithm(arr, arr_size) << endl;
	return 0;
}