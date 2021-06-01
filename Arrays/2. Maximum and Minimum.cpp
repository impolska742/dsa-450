#include "useful.h"

// O(n) => O(N) + O(N)
// Time complexity => O(N)
// Space Complexity => O(1)

pair<int, int> naiveSolution(int arr[], int n) {
	int minimumElement, maximumElement;
	minimumElement = INT_MAX;
	maximumElement = INT_MIN;

	// For minimum element
	for (int i = 0; i < n; i++) {
		if (arr[i] < minimumElement) {
			minimumElement = arr[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] > maximumElement) {
			maximumElement = arr[i];
		}
	}

	return make_pair(minimumElement, maximumElement);
}

pair<int, int> singleSolution(int arr[], int n) {
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

pair<int, int> secondMaxAndMinimum(int arr[], int n) {
	int firstMin, secondMin, firstMax, secondMax;
	firstMin = secondMin = INT_MAX;
	firstMax = secondMax = INT_MIN;
	// For minimum element
	// 1 2 3 4 5
	for (int i = 0; i < n; i++) {
		if (arr[i] < firstMin) {
			secondMin = firstMin;
			firstMin = arr[i];
		} else if (arr[i] < secondMin and arr[i] > firstMin) {
			secondMin = arr[i];
		}

		else if (arr[i] > firstMax) {
			secondMax = firstMax;
			firstMax = arr[i];
		} else if (arr[i] > secondMax and arr[i] < firstMax) {
			secondMax = arr[i];
		}
	}

	return make_pair(secondMin, secondMax);

}

int main(int argc, char const *argv[])
{
	int arr[] = {4, 28, 56, 1, 3, 84};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	// 84 56
	// 1 3
	Display(arr, arr_size);
	pair<int, int> p = naiveSolution(arr, arr_size);
	pair<int, int> p2 = secondMaxAndMinimum(arr, arr_size);
	cout << p.first << " " << p.second << endl;
	cout << p2.first << " " << p2.second << endl;
	return 0;
}