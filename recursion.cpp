#include <bits/stdc++.h>
using namespace std;

void recursion(int n){
    if(n==5)
        return;
    recursion(n+1);
    cout << " " << n;
    
}
int add(int n){
    if(n>5){
        return 0;
    }
    int sum = add(n + 1);

    return sum + n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // recursion = recursive + optimization

   cout << "ans:" << add(1);

    return 0;
}
