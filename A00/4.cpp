#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    for (int i = n - 1; i > 0; i--) {
        n *= i;
    }

    cout << n;

    return 0;
}