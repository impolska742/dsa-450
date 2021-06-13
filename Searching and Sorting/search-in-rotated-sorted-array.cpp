#include<bits/stdc++.h>
using namespace std;

// Modified Binary Search
// Time Complexity => O(logN)
// Space Complexity => O(1)
int searchBinary(vector<int> &nums, int target) {
	int lo = 0;
	int hi = nums.size() - 1;
	while(lo <= hi) {
		int mid = (lo + hi)/2;
		if(nums[mid] == target) {
			return mid;
		}

		else if(nums[lo] <= nums[mid]) {
			if(target >= nums[lo] and target <= nums[mid])
				hi = mid - 1;
			else
				lo = mid + 1;
		} else {
			if(target >= nums[mid] and target <= nums[hi])
				lo = mid + 1;
			else
				hi = mid - 1;
		}
	}

	return -1;
}


// Basic Linear Search
// Time Complexity => O(N)
// Space Complexity => O(1)
int searchLinear(vector<int> nums, int target) {
	for(int i = 0; i < nums.size(); i++) {
		if(nums[i] == target){
			return i;
		}
	}

	return -1;
}

int main(int argc, char const *argv[])
{
	vector<int> nums = {4,5,6,7,0,1,2};
	int target = 0;

	cout << searchBinary(nums, target) << endl;
	cout << searchLinear(nums, target) << endl;
	return 0;
}