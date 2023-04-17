#include <iostream>

using namespace std;

string bin (int);

int main () {
    int n;
    cin >> n;

    cout << bin(n);

    return 0;
}

string bin (int n) {
    if (n == 0) return "0";
    string b2 = "";
    while (n > 0) {
        b2 = to_string(n % 2) + b2;
        n /= 2;
    }
    return b2;
}