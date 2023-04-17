#include <iostream>

using namespace std;

int substract(int);

int main () {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        n = substract(n);
    }
    cout << n;

    return 0;
}

int substract (int n) {
    if (n % 10 == 0) {
        return n / 10;
    } else {
        return n - 1;
    }
}