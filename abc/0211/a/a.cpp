#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	double a, b; cin >> a >> b;
	printf("%.9f\n", (a - b) / 3 + b);
	return 0;
}
