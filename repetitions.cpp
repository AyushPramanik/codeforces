#include <iostream>
#include <string>
using namespace std;

// CSES Repetitions

int main() {
    string s;
    cin >> s;

    int max_count = 1;
    int current_count = 1;

    for (int i = 1; i < s.length(); i++){
        if (s[i] == s[i-1]) {
            current_count++;
        } else {
            current_count = 1;
        }
        max_count = max(max_count, current_count);
    }

    cout << max_count << endl;

    return 0;
}
