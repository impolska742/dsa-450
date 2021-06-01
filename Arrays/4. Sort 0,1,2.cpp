#include "useful.h"

// 0, 1, 2, 0, 0
// zero_count = 3
// ones_count = 1
// twos_count = 1
// O(N) => Time Complexity
// O(1) => Space Complexity
void naiveSolution(int arr[], int n) {
	int zero_count, ones_count, twos_count;
	zero_count = ones_count = twos_count = 0;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		if (arr[i] == 0) zero_count ++;
		else if (arr[i] == 1) ones_count++;
		else twos_count++;
	}
	int i = 0;
	for (int j = 0; j < zero_count; j++) {
		arr[i] = 0;
		i++;
	}
	for (int j = 0; j < ones_count; j++) {
		arr[i] = 1;
		i++;
	}
	for (int j  = 0; j < twos_count; j++) {
		arr[i] = 2;
		i++;
	}
}


void sort012(int a[], int n)
{
	int low = 0, high = n - 1, mid = 0;

	while (mid <= high) {

		if (a[mid] == 0)
			swap(a[mid++], a[low++]);

		else if (a[mid] == 1)
			mid++;

		else
			swap(a[mid], a[high--]);
	}
}


void mysort012(int a[], int n)
{
	int lo, mid, hi;
	lo = mid = 0;
	hi = n - 1;

	for (mid = 0; mid <= hi; mid++) {
		if (a[mid] == 0) {
			swap(a[mid], a[lo]);
			lo++;
		} else if (a[mid] == 2) {
			swap(a[mid], a[hi]);
			hi--;
		}
	}
}


int main(int argc, char const *argv[])
{
	int arr[] = {0, 2, 1, 2, 0, 0, 2, 1, 2, 1, 0, 0};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	Display(arr, arr_size);
	// naiveSolution(arr, arr_size);
	mysort012(arr, arr_size);
	Display(arr, arr_size);


	return 0;
}