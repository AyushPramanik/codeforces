#include <iostream>
#include <set>
using namespace std;

int main() {
    set<char> chars;

    string input;
    cin >> input;

    for (char c : input) {
            chars.insert(c);
        }
    if (chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
