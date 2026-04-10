#include <bits/stdc++.h>
using namespace std;

// void recursion(int n){
//     if(n==5)
//         return;
//     recursion(n+1);
//     cout << " " << n;
    
// }
// int add(int n){
//     if(n>5){
//         return 0;
//     }
//     int sum = add(n + 1);

//     return sum + n;
// }

bool palindrome(vector<int> &a, int l, int r) {
    if (l >= r) {
        return true;
    }

    if (a[l] != a[r]) {
        return false;
    }

    return palindrome(a, l + 1, r - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "ans: " << palindrome(v, 0, v.size() - 1);

    return 0;
}
