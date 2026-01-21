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
        return 0;
}
