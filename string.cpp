#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        s.push_back(c);
        //    s.pop_back(); // remove last character
    }

    for(int i=0;i<s.size();i++){
        cout << s[i] << " ";
    }
    // cout << "\n";
    // cout << "front " << s.front() << "\n";
    // cout << "back " << s.back() << "\n";
    // s.pop_back(); // remove last character
   
    string str = s.substr(0,2);
    cout << "\n" << str << "\n";
     
    cout << "\n";
       for(int i=0;i<s.size();i++){
        cout << s[i] << " ";
    }
   cout << s.empty(); // if string is empty return 1 else 0

        return 0;
}
