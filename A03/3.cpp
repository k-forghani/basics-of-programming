#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = -i; j <= i; j++) {
            cout << -abs(j) + i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}