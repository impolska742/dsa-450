#include "useful.h"
using namespace std;

bool isPalindrome(string s) {
	int n = s.length();
	int i, j;
	i = 0;
	j = n - 1;

	while (i <= j) {
		if (s[i] != s[j])
			return false;
		i++;
		j--;
	}

	return true;
}

int main(int argc, char const *argv[])
{
	string s = "12321";
	cout << isPalindrome(s) << endl;
	return 0;
}