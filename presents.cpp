#include <iostream>
#include <vector>
using namespace std;

// 136A - Presents

int main() {
    int n; cin >> n;
    vector<int> result(n);
    int index = 1;

    while (n--) {
        int p; cin >> p;
        result[p-1] = index;
        index += 1;
    }

    for (int digit : result) {
            cout << digit << " ";
        }

    cout << "\n";

    return 0;
}
