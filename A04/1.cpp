#include <iostream>

using namespace std;

int main () {
    string sent;
    getline(cin, sent);
    
    for (int i = 0; i < sent.length(); i++) {
        if (i == 0) {
            sent[i] = toupper(sent[i]);
        } else {
            sent[i] = tolower(sent[i]);
        }
    }
    
    cout << sent;
    
    return 0;
}