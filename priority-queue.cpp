#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //priority queue --> sorted based on priority
    // duplicate o thakte pare
    //index vabe access kora jayna

    priority_queue<int> pq; 
    priority_queue<int, vector<int>, greater<int>> minPq; //min heap 
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(15);
    
    cout << pq.top() << "\n"; // 20
    pq.pop();
    cout << pq.top() << "\n"; // 15
    cout << pq.size() << "\n";
    cout << pq.empty() << "\n"; // 0 means not empty , 1 means empty
    
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";

    return 0;
}
