#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    float buffer, max;

    for (int i = 0; i < n; i++) {
        cin >> buffer;
        if (i == 0) {
            max = buffer;
        } else if (buffer > max) {
            max = buffer;
        }
    }

    cout << max;

    return 0;
}