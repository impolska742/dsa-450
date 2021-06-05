#include "useful.h"
using namespace std;

map<char, int> findDuplicates(string s) {
	map<char, int> m;
	map<char, int> answer;
	for (int i = 0; i < s.length(); i++) {
		m[s[i]]++;
	}

	for (auto itr = m.begin(); itr != m.end(); ++itr) {
		if (itr->second > 1) {
			answer.insert(pair<char, int> (itr->first, itr->second));
		}
	}

	return answer;
}

int main(int argc, char const *argv[])
{
	string s = "geeksforgeeks";
	map<char, int> m = findDuplicates(s);
	for (auto itr = m.begin(); itr != m.end(); itr++) {
		cout << itr->first
		     << '\t' << itr->second << '\n';
	}
	return 0;

}