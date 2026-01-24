
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //  deque -- >double ended queue
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(20);
    dq.push_front(1);
    dq.push_back(30);
    dq.push_front(2);
    dq.pop_back();
    dq.pop_front();
    for(auto x:dq){
        cout << x << " ";
    }
    cout << "\n";
    cout << "front " << dq.front() << "\n";
    cout << "back " << dq.back() << "\n";
    dq.insert(dq.begin()+1,15); // insert 15 at index 1
    //deque // extra memory use that is drawback
        return 0;
}

