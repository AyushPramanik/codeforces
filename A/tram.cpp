#include <iostream>
using namespace std;

// 116A - Tram

int main() {
    int n; cin >> n;

    int max_seen = 0;
    int curr = 0;

    while (n--) {
        int a, b; cin >> a >> b;
        curr -= a;
        curr += b;
        max_seen = max(max_seen, curr);
    }

    cout << max_seen << endl;

    return 0;
}
