#include <iostream>

using namespace std;

int main () {
    int n = 0;
    int max_divs = 0;
    while (n != -1) {
        cin >> n;
        int divs = 0;
        if (n != -1) {
            for (int i = 1; i <= n; i++) {
                if (n % i == 0) {
                    divs++;
                }
            }
            if (divs > max_divs) {
                max_divs = divs;
            }
        }
    }
    for (int i = 0; i < max_divs; i++) {
        if (i == 0 || i == max_divs - 1) {
            for (int j = 0; j < max_divs; j++) {
                cout << "*";
            }
            cout << endl;
        } else {
            cout << "*";
            for (int j = 0; j < max_divs - 2; j++) {
                cout << " ";
            }
            cout  << "*" << endl;
        }
    }
    return 0;
}