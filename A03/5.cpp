#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int na, nb, k, m;
    cin >> na >> nb >> k >> m;

    int a[na], b[nb];

    for (int i = 0; i < na; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < nb; i++) {
        cin >> b[i];
    }

    sort(a, a + na);
    sort(b, b + nb);

    if (a[k - 1] < b[nb - m]) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}