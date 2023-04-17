#include <iostream>

using namespace std;

int distance (int, int, int, int);

int test () {
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;

    int x = 1, y = 1;

    if (distance(n, m, sx, sy) <= d) {
        return -1;
    }

    while (x <= n && y < m) {
        if (distance(x, y, sx, sy) <= d) {
            break;
        }
        if (x < n) {
            x++;
        } else {
            y++;
        }
    }
    
    if (x == n && y == m) {
        return m + n - 2;
    }

    x = 1, y = 1;

    while (y <= m && x < n) {
        if (distance(x, y, sx, sy) <= d) {
            break;
        }
        if (y < m) {
            y++;
        } else {
            x++;
        }
    }

    if (x == n && y == m) {
        return m + n - 2;
    }

    return -1;
}

int main () {
    int t;
    cin >> t;

    while (t--) {
        cout << test() << endl;
    }

    return 0;
}

int distance (int x1, int y1, int x2, int y2) {
    return abs(x2 - x1) + abs(y2 - y1);
}