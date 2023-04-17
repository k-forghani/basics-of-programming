#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int count = 0, sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
                sum += j;
            }
        }
    }
    cout << count << " " << sum;
    return 0;
}