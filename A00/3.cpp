#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int n, m;
    cin >> n;
    cin >> m;

    int sum = 0;

    for (int i = -10; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            int value = pow(i + j, 3) / pow(j, 2);
            sum += value;
        }
    }

    cout << sum;

    return 0;
}