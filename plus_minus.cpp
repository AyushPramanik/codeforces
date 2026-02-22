#include <iostream>
using namespace std;

// 1807A. Plus or Minus

int main() {
	int t;
	cin >> t;
	
	int a, b, c;

	while (t--) {
		cin >> a >> b >> c;
		if (a + b == c) {
			cout << "+" << endl;
		} else if (a - b == c) {
			cout << "-" << endl;
		}
	}
	return 0;
}
