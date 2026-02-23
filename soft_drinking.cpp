#include <iostream>
#include <algorithm>
using namespace std;

// 151A. Soft Drinking

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toasts = (k * l) / nl;
    int lime_slices = c * d;
    int salt = p / np;

    cout << min({toasts, lime_slices, salt})/3 << endl;

    return 0;
}
