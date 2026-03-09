#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 768A - Oath of the Night's Watch
int main() {
    int n; cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mn = *min_element(arr.begin(), arr.end());
    int mx = *max_element(arr.begin(), arr.end());

    int count = 0;

    for (int x : arr) {
        if (x > mn && x < mx) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
