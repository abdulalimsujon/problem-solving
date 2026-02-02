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
    //lower bound is to find first element which is greater than or equal to given element
    auto it2 = s.lower_bound(7); // O(log n)    given value or immediately greater than given value
    auto it3 = s.upper_bound(7); // O(log n)    it will give strctly greater than given element
    cout << "Lower bound of 7: ";
    if (it3 != s.end()) {
        cout << *it3 << "\n";
    } else {        
        cout << "No element found\n";
    }

    return 0;
}
