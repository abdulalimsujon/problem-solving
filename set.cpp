#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //set 
    // sorted unique elements
    int n;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x); // O(log n)
    }

    // auto it = s.begin() + 1; // we cannot do it in set multiset and in map
     //we have to move here like ++
    // for (auto it = s.begin(); it != s.end();it++){
    //     cout << *it << "\n";
    // }

    for(auto x:s){
        cout << x << "\n";
    }
    //     auto it = s.begin();

    // cout << *it << "\n"; // smallest element

    auto it = s.find(5); // O(log n)
    //if dont find value it will return s.end()
    // it also true for set multiset and map
    if (it != s.end()) {
        cout << "Found: " << *it << "\n";
    } else {
        cout << "Not Found\n";
    }
    s.erase(5); // to use erase we to find if this value is exist or not
   // O(log n)
    s.count(5); // a particular element is exist or not 
    // if return 0 then exist and  return 1 exist 

    return 0;
}
