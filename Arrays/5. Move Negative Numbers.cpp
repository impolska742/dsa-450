#include "useful.h"

// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5

void twoPointers(int arr[], int n) {
	int low, high, mid;
	low = mid = 0;
	high = n - 1;
	while (low <= high) {
		if (arr[mid] < 0) {
			swap(arr[low], arr[mid]);
			low++;
			mid++;
		}
		else {
			swap(arr[high], arr[mid]);
			high--;
		}
	}
}


int main(int argc, char const * argv[])
{
	int arr[] = { -1, 2, 5, -4, -9 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	Display(arr, arr_size);
	twoPointers(arr, arr_size);
	Display(arr, arr_size);
	return 0;
}