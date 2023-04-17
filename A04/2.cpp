#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    string name;
    cin >> name;

    for (int i = 0; i < n; i++) {
        name = "copy of " + name;
    }

    cout << name;

    return 0;
}