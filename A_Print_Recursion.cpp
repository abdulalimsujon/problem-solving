#include <bits/stdc++.h>
using namespace std;

void printRec(int n) {
    if (n == 0) return;          
    cout << "I love Recursion\n";
    printRec(n - 1);            
}

int main() {
    int n;
    cin >> n;
    printRec(n);
    return 0;
}
