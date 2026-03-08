#include <iostream>
#include <string>
using namespace std;

// 266B. Queue at the School
int main() {
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while (t--) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++; // skip next position
            }
        }
    }

    cout << s << endl;

    return 0;
}
