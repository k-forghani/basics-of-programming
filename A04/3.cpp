#include <iostream>

using namespace std;

void test () {
    int n;
    cin >> n;

    int q[26];

    for (int i = 0; i < 26; i++) {
        q[i] = 0;
    }

    int balloons = 0;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;

        int index = c - 'A';

        if (q[index] == 0) {
            balloons += 2;
        } else {
            balloons++;
        }

        q[index]++;
    }

    cout << balloons << endl;
}

int main () {
    int t;
    cin >> t;

    while (t--) {
        test();
    }

    return 0;
}