#include <iostream>
#include <string>

#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int alpha[26], cnt = 0;
string input;

int main() {
    FASTIO;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] < 97) alpha[input[i] - 65]++; 
        else alpha[input[i] - 97]++; 
    }

    int max = 0, max_indx = 0;

    for (int i = 0; i < 26; i++) {
        if (max < alpha[i]) {
            max = alpha[i];
            max_indx = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (max == alpha[i]) cnt++;
    }
    if (cnt > 1) cout << "?";
    else cout << (char)(max_indx + 65);
}