#include <bits/stdc++.h>
using namespace std;

// NOTE 1:
// std::string::npos is a special constant that means "no position / not found".
// It is used when string search functions fail.

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "hello world";

    // NOTE 2:
    // s.find("world") returns:
    // - the starting index if "world" exists
    // - string::npos if it does NOT exist

    // string::npos is size_t(-1), which is the largest possible value for size_t
    // Thus, it is NOT equal to -1 in signed integer context
    if (s.find("world") != string::npos) {
        // NOTE 3:
        // Comparison with string::npos is the CORRECT way
        // Never compare with -1
        cout << "Found!" << endl;
    } else {
        cout << "Not found!" << endl;
    }

    return 0;
}
