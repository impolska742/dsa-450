#include "useful.h"
using namespace std;

bool areRotation(string &s1, string &s2)
{
	if (s1.length() != s2.length())
		return false;
	return ((s1 + s1).find(s2) != string ::npos);
}

int main(int argc, char const *argv[])
{
	string s1 = "ABAB";
	string s2 = "ABBA";
	cout << areRotation(s1, s2) << endl;
	return 0;
}