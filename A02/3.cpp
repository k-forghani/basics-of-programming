#include <iostream>
#include <cmath>

using namespace std;

bool is_prime (int);
int sum_prime_divs (int);

int main () {
    int n;
    cin >> n;
    
    cout << sum_prime_divs(n);

    return 0;
}

bool is_prime (int n) {
    if (n == 2) return true;
    for (int j = 2; j <= sqrt(n); j++) {
        if (n % j == 0) {
            return false;
        }
    }
    return true;
}

int sum_prime_divs (int n) {
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            if (is_prime(i)) {
                sum += i;
            }
        }
    }
    return sum;
}