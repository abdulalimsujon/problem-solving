#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq; // Min-heap
    pq.push(5);
    pq.push(2);
    pq.push(8); 
    pq.push(1);

    while (!pq.empty()) {
        cout << pq.top() << " "; // Outputs: 8 5 2 1 we
         //just get the top from the top of the priority queue
        pq.pop(); 
    }   
    cout << "size ==>" << pq.size() << endl; // Outputs: 0, since we popped all elements
    return 0;
}
