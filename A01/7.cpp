#include <iostream>
#include <string>

using namespace std;

bool is_digit(char);
string code(string);
string decode(string);

int main () {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int type;
        string word;

        cin >> type;
        cin >> word;

        if (type == 1) {
            cout << code(word) << endl;
        } else if (type == 2) {
            cout << decode(word) << endl;
        }
    }

    return 0;
}

bool is_digit (char chr) {
    int ascii = chr;
    if (ascii < 48 || ascii > 57) {
        return false;
    }
    return true;
}

string code (string word) {
    string previous = "", result = "";
    int counter = 1;
    for (int i = 0; i < word.length(); i++) {
        if (i == 0) {
            result += word[i];
        } else {
            if (word[i] != word[i - 1]) {
                if (counter > 1) {
                    result += to_string(counter);
                }
                result += word[i];
                counter = 1;
            } else {
                counter++;
            }
        }
        previous = word[i];
    }
    if (counter > 1) {
        result += to_string(counter);
    }
    return result;
}

string decode (string word) {
    string result = "";

    string latest_digit = "";
    int latest_count = 0;
    char previous;

    for (int i = 0; i < word.length(); i++) {
        if (is_digit(word[i])) {
            latest_digit += word[i];
        } else {
            if (latest_digit.length() > 0) {
                latest_count = stoi(latest_digit);
                for (int j = 0; j < latest_count - 1; j++) {
                    result += previous;
                }
            }
            result += word[i];
            previous = word[i];
            latest_digit = "";
        }
    }
    if (latest_digit.length() > 0) {
        latest_count = stoi(latest_digit);
        for (int j = 0; j < latest_count - 1; j++) {
            result += previous;
        }
    }

    return result;
}