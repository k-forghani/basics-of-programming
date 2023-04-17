#include <iostream>

using namespace std;

string repeat(char, int);

int main () {
    string n;
    cin >> n;

    for (int i = 0; i < n.length(); i++) {
        int digit = n[i]-'0';

        cout << n[i] << ":";

        if (n[i] != '0') {
            cout << " " << repeat(n[i], digit);
        }

        cout << endl;
    }

    return 0;
}

string repeat (char chr, int times) {
    string result = "";
    for (int i = 0; i < times; i++) {
        result += chr;
    }
    return result;
}