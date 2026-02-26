#include <iostream>
#include <string>
using namespace std;

// 41A - Translation

int main() {
    string s, t; cin >> s >> t;

    if (s.length() != t.length()) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[s.length() - i - 1]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
