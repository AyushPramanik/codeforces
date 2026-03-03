#include <iostream>
#include <vector>
using namespace std;

// 580A. Kefa and First Steps

int main() {
    int n; cin >> n;
    vector<int> sequence(n);

    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    int max_len = 1;
    int curr_len = 1;

    for (int i = 1; i < n; i++) {
        if (sequence[i - 1] > sequence[i]) {
            curr_len = 0;
        } else {
            curr_len++;
        }
        max_len = max(max_len, curr_len);
    }
    cout << max_len << endl;
    return 0;
}
