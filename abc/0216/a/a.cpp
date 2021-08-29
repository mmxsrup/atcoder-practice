#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int idx = 0; while (s[++idx] != '.');

	string x = s.substr(0, idx);
	string y = s.substr(idx + 1);

	if (0 <= stoi(y) && stoi(y) <= 2) {
		cout << x << "-" << endl;
	} else if (3 <= stoi(y) && stoi(y) <= 6) {
		cout << x << endl;
	} else if (7 <= stoi(y) && stoi(y) <= 9) {
		cout << x << "+" << endl;
	}
	return 0;
}
