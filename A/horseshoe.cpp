#include <iostream>
#include <set>
using namespace std;

// A. Is your horseshoe on the other hoof?
int main() {
    set<int> colors;
    int x;

    for (int i = 0; i < 4; i++) {
        cin >> x;
        colors.insert(x);
    }

    cout << 4 - colors.size();

    return 0;
}
