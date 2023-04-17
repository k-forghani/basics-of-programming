#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    int a[n][n], b[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int value = 0;
            for (int k = 0; k < n; k++) {
                value += a[i][k] * b[k][j];
            }
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}