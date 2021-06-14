#include<bits/stdc++.h>
using namespace std;

// ax + by + c = 0 
// eqn of a line : ax + by + c = 0
struct line
{
	int a, b, c;
	line() {}	
	line(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}

	double dist(double x, double y, point p) {
		return sqrt((x - p.x)*(x - p.x) + (y-p.y)*(y-p.y));
	}

	double findOptimumDistance(int points[N][2])
};

struct point {
	int x,y;
	point() {}
	point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

int main(int argc, char const *argv[])
{
	line(1, -1, 3);
	int points[5][2] = {{ -3, -2 }, { -1, 0 }, { -1, 2 }, { 1, 2 }, { 3, 4 }};

	return 0;
}