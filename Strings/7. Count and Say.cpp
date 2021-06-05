#include "useful.h"
using namespace std;

string countAndSay(int n) {
	string num = to_string(n);
	if (n == 1)
		return "1";
	int count = 1;
	string answer = "";

	for (int i = 0; i < num.length(); i++) {
		count = 1;
		char curr = num[i];
		int j = i + 1;

		while (num[j] == curr) {
			count++;
			j++;
		}

		string c = to_string(count);
		c.push_back(num[i]);

		answer += c;

		i = i + count - 1;
	}
	return answer;
}


int main(int argc, char const *argv[])
{
	int n = 2;
	cout << countAndSay(n) << endl;
	return 0;
}
