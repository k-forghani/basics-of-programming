#include <iostream>
#include <cmath>

using namespace std;

int lcm (int, int);
int gcd (int, int);
int nps (int);

int main () {
    int a, b, c;
    cin >> a >> b >> c;

    // We know that [a, b] * (a, b) = (a * b).
    // So we can write [a, b] / (a, b) = (a * b) / (a, b) ^ 2.

    int q1 = (a * b) / pow(gcd(a, b), 2);
    int q2 = (a * c) / pow(gcd(a, c), 2);
    int q3 = (b * c) / pow(gcd(b, c), 2);

    cout << nps(q1) << ' ' << nps(q2) << ' ' << nps(q3);

    return 0;
}

// int lcm (int a, int b) {
//     int c = a;
//     if (b > a) c = b;
//     while (c % a != 0 || c % b != 0) c++;
//     return c;
// }

int gcd (int a, int b) {
    int c = a;
    if (a > b) c = b;
    while (a % c != 0 || b % c != 0) c--;
    return c;
}

int nps (int a) {
    int sqa = sqrt(a);
    int lower = pow(sqa, 2), higher = pow(sqa + 1, 2);
    if (a - lower > higher - a) {
        return higher;
    } else {
        return lower;
    }
}