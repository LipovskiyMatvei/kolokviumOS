#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    string original = s;
    reverse(s.begin(), s.end());

    cout << (original == s ? "Palindrom!" : "Not palindrom.") << endl;

    return 0;
}