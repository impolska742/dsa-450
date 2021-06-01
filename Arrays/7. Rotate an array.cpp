#include "useful.h"

void rotateLeftByOne(int arr[], int n) {
	int temp = arr[n - 1];
	// for (int i = 0; i < n; i++) {
	// 	int x = arr[i];
	// 	arr[i] = temp;
	// 	temp = x;
	// }

	for (int i = n - 1; i >= 0; i--) {
		arr[i] = arr[i - 1];
		if (i == 0) {
			arr[0] = temp;
		}
	}
}

// 1 2 3 4 5 => input
// d = 2
// 3 4 5 1 2 => output

// Time => O(N)
// Space => O(d) ~ O(N)

void rotateLeftByD(int arr[], int n, int d) {
	int temp[d];
	// d = 2
	for (int i = 0; i < d ; ++i)
	{
		temp[i] = arr[i];
	}
	// arr => 1 2 3 4 5
	// temp => 1 2
	for (int i = d; i < n; i++) {
		arr[i - d] = arr[i];
		Display(arr, n);
	}
	// arr => 3 4 5 4 5
	// temp => 1 2
	for (int i = 0; i < d; i++) {
		arr[n - d + i] = temp[i];
	}
	// arr => 3 4 5 1 2
	// temp => 1 2
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 4, 5};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	Display(arr, arr_size);
	rotateLeftByD(arr, arr_size, 2);
	return 0;
}