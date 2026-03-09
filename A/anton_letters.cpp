#include <iostream>
#include <set>
using namespace std;

// 443A - Anton and Letter
int main() {
    char ch;
    set<char> letters;

    while (cin >> ch) {
        if (ch >= 'a' && ch <='z') {
            letters.insert(ch);
        }
    }
    return 0;
}
