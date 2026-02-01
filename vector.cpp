#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    //   vector<int> v(n,5); // initialize all elements with 5

    // for(auto x:v){
    //     cout << x << " "; 
    // }
    cout << "\n";
    // cout << "front " << v.front() << "\n";
    // cout << "back " << v.back() << "\n";
    // cout << "size " << v.size() << "\n";    
    // cout <<  "empty " << v.empty() << "\n"; // 0 means false, 1 means true
    //  v.clear();
    // cout << "size after clear " << v.size() << "\n";

    // v.resize(5); // resize vector to size 5

    //begin end rbegin rend

    // cout << "begin iterator" <<  *v.begin() << "\n";
    // cout << "last element using end-1 " << *(v.end() - 1) << "\n";
    // cout << "reverse begin iterator " << *v.rbegin() << "\n";   
    // cout << "reverse end iterator " << *(v.rend() - 1) << "\n";

    // for (auto i = v.begin(); i != v.end(); i++){
    //     cout << *i << " ";
    // }

    // cout << *--v.end() << "\n"; // last element

    // reverse(v.begin()+2, v.end());
    // sort(v.begin(), v.end());
    // sort(v.begin(), v.end(), greater<int>());
    for (auto x : v) {
        cout << x << " ";
    }

    // auto mx = *max_element(v.begin(), v.end());
    // auto mn = *min_element(v.begin(), v.end());
    // auto maxElemIndex = max_element(v.begin(), v.end()) - v.begin();

     //insert,erase-->  best use in array
     v.insert(v.begin() + 2, 10); // insert 10 at index 2


     v.erase(v.begin() + 4); // erase element at index 4
     auto nextOfBegin = *v.begin() + 1; // we cannot do it in set multiset and in map
     cout << "\n";
     for (auto x : v)
     {
         cout << x << " ";
     }
      v.erase(v.begin() + 3);
  
      cout << "\n";
      return 0;
}
