#include <iostream>

using namespace std;

int unzero (int);

int main () {
    int a, b;
    cin >> a >> b;

    int c = a + b;
    
    if (unzero(a) + unzero(b) == unzero(c)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

int unzero (int n) {
    string m, k;
    m = to_string(n);
    for (int i = 0; i < m.length(); i++) {
        if (m[i] != '0') {
            k += m[i];
        }
    }
    return stoi(k);
}