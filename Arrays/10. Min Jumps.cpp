#include "useful.h"

int minJumps(int arr[], int n) {
	int jumps = 0;
	int index = 0;
	while (index <= n) {
		if (arr[index] != 0) {
			index = index + arr[index];
			jumps++;
		} else {
			return -1;
		}
	}
	return jumps;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	// 1 0 2 3 4
	cout << minJumps(arr, arr_size) << endl;
	return 0;
}