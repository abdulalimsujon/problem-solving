#include <bits/stdc++.h>
using namespace std;

//multiset
// sorted non unique elements



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;       
        ms.insert(x); // O(log n)
    }
    // if want to erase single in many occurence of particular element
    // auto it = ms.find(3); // it will return first occurence of 3
    // if(it != ms.end()){
    //     ms.erase(it); // erase only first occurence of 3
    // }
    // ms.erase(5); // it will erase all occurence of 5
    for(auto x:ms){
        cout << x << "\n";
    }

  auto p =   ms.count(3);

  //complexity of count is O(log n) 
  //if multiple occurence then O(log n) + O(k) where k is number of occurence
  
  // it will return how many occurence of 3 present in multiset
  cout << p;

  return 0;
}
