#include <iostream>
#include <vector>
using namespace std;

// CSES Increasing Array

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 1; i < n; i++) {
        if (nums[i-1] > nums[i]) {
            total += nums[i-1] - nums[i];
            nums[i] = nums[i-1];
        }
    }

    cout << total << endl;
    return 0;
}
