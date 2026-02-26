#include <iostream>
#include <string>
using namespace std;

// A. Bit++

int main() {

    int n;
    cin >> n;

    int x = 0;

    while (n--) {

        string action;
        cin >> action;

        if (action[1] == '+') {
            x++;
        } else {
            x--;
        }

    }

    cout << x;

    return 0;
}
