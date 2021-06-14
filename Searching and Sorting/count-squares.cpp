#include<bits/stdc++.h>
using namespace std;

float squareRoot(int n)
    {
        /*We are using n itself as initial approximation
          This can definitely be improved */
        float x = n;
        float y = 1;
        float e = 0.000001; /* e decides the accuracy level*/
        while (x - y > e) {
            x = (x + y) / 2;
            y = n / x;
        }
        return x;
    }	

int countSquares(int N) {
	int cnt = 0;
	for(int i = 1; i * i <= N; i++) {
		if(i * i < N) {
			cnt++;
		}
	}

	return cnt;
}
int main(int argc, char const *argv[])
{
	int n = 9;
	cout << countSquares(n) << endl;
	// for(int x = 1; x <= n; x++) {
	// 	float r = squareRoot(x);
	// 	if(r - int(squareRoot(x)) == 0) {
	// 		cout << r*r << endl;
	// 	}
	// }
	return 0;
}