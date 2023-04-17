#include <iostream>

using namespace std;

int fibonacci (int);

int main () {
    int n;
    cin >> n;

    cout << fibonacci(n) % 5;
    
    return 0;
}

int fibonacci (int n) {
    if (n < 3) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}