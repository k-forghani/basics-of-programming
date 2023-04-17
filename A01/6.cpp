#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int base = n / 3;
        int c1 = base, c2 = base;

        int value = c1 + 2 * c2;

        c1 += (n - value) % 2;
        c2 += (n - value) / 2;

        cout << c1 << " " << c2 << endl;
    }

    return 0;
}