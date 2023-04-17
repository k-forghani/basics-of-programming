#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int previous = 0, current, changes = 0;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if (i != 0 and previous != current) {
            changes++;
        }
        previous = current;
    }
    cout << changes;
    return 0;
}