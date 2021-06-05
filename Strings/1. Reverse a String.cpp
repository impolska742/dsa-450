#include "useful.h"

using namespace std;

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

// Time Complexity => O(N)
// Space Complexity => O(N)
string reverse(string s) {
	string temp = "";
	for (int i = s.length() - 1; i >= 0; i--) {
		temp.push_back(s[i]);
	}
	return temp;
}

// Time Complexity => O(N)
// Space Complexity => O(1)
string twoPointers(string s) {
	int n = s.length();
	int i, j;
	i = 0;
	j = n - 1;

	while (i < j) {
		swap(s[i], s[j]);
		i++;
		j--;
	}

	return s;
}

int main(int argc, char const *argv[])
{
	string s = "racecar";
	// cout << reverse(s);
	cout << twoPointers(s);
	return 0;
}