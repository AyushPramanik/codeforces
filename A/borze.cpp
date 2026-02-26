#include <iostream>
#include <string>
using namespace std;

// 32B - Borze

int main() {
    string s; cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            cout << 0;
        } else {
            if (s[i+1] == '.') {
                cout << 1;
            } else {
                cout << 2;
            }
        }
    }

    return 0;
}
