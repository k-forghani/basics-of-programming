#include <iostream>

using namespace std;

void test () {
    int n;
    cin >> n;

    int d[n], a[n];

    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    a[0] = d[0];

    for (int i = 1; i < n; i++) {
        if (d[i] != 0 && a[i - 1] - d[i] >= 0) {
            cout << -1 << endl;
            return;
        }
        a[i] = a[i - 1] + d[i];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}

int main () {
    int t;
    cin >> t;

    while (t--) {
        test();
    }

    return 0;
}