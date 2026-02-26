#include <iostream>
#include <vector>
using namespace std;

// 1462A - Favourite Sequence

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int left = 0; int right = n - 1;

        while (left <= right) {
            if (left == right) {
                cout << arr[left] << endl;
            } else {
                cout << arr[left] << " " << arr[right] << " ";
            }
            left++;
            right--;
        }
    }

    return 0;
}
