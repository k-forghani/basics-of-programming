#include <iostream>

using namespace std;

int reverse_number(int);
bool is_prime(int);

int main () {
    int n;
    cin >> n;
    int n_rev = reverse_number(n);
    cout << n_rev << endl;
    if (is_prime(n) && is_prime(n_rev)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

int reverse_number (int n) {
    int n_rev = 0;
    while (n > 0) {
        n_rev *= 10;
        n_rev += n % 10;
        n /= 10;
    }
    return n_rev;
}

bool is_prime (int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i != 1 && i != n) {
            return false;
        }
    }
    return true;
}