#include "useful.h"

using namespace std;

bool isValidShuffle(string s1, string s2, string s3) {

	if (s1.length() != s2.length() + s3.length())
		return false;

	int j, k;
	j = k = 0;

	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] == s2[j]) j++;
		else if (s1[i] == s3[k]) k++;
		else {
			return false;
		}
		// cout << "i : " << i << " j : " << j << " k : " << k << endl;
	}


	// if (j < s2.length() and k < s3.length())
	// 	return false;

	return true;
}

int main(int argc, char const *argv[])
{
	string s1, s2, s3;
	s1 = "AB12BA34";
	s2 = "1234";
	s3 = "ABBA";

	isValidShuffle(s1, s2, s3) ? cout << "YES\n" : cout << "NO\n";
	return 0;
}