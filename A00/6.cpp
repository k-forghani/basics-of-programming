#include <iostream>

using namespace std;

int reverse_n(int);

int main () {
    int n;
    cin >> n;

    if (n == reverse_n(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

int reverse_n (int n) {
    int rev_n = 0;
    while (n > 0) {
        rev_n *= 10;
        rev_n += n % 10;
        n /= 10;
    }
    return rev_n;
}