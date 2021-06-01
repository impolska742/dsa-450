#include "useful.h"
using namespace std;
// // Input  : arr[] = {1, 2, 3}
// // Output : arr[] = {3, 2, 1}

// // Input :  arr[] = {4, 5, 1, 2}
// // Output : arr[] = {2, 1, 5, 4}

// T
// Space => O(n) Extra array
// Reverse Traversal

void naiveSolution(int arr[], int n) {
	int temp[n];
	int j = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		temp[j] = arr[i];
		j++;
	}

	for (int i = 0; i < n; i++) {
		arr[i] = temp[i];
	}
}

// 2. Two pointers
// Time Complexity => O(N)
// Space Complextiy => O(1)
void twoPointers(int arr[], int n) {
	int lo, hi;
	lo = 0;
	hi = n - 1;
	while (i <= j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
}


int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	Display(arr, arr_size);
	// naiveSolution(arr, arr_size);
	twoPointers(arr, arr_size);
	Display(arr, arr_size);
	return 0;
}