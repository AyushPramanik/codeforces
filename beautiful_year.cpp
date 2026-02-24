#include <iostream>
#include <set>
using namespace std;

// 271A - Beautiful Year

int main() {
    int year;
    cin >> year;

    while (true) {
        year++;

        string s = to_string(year);
        set<char> digits(s.begin(), s.end());

        if (digits.size() == s.size()) {
            cout << year << endl;
            break;
        }

    }

    return 0;
}
