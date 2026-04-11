
#include <bits/stdc++.h>
using namespace std;
long long int dp[1005];
int fibo(long long int n)
{
    if(n<2){
        return n;
    }
    if(dp[n] != -1)
        return dp[n];
    dp[n] = fibo(n - 1) + fibo(n - 2);

    return dp[n];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int n;
    cin >> n;
    memset(dp,-1, sizeof(dp));
    cout << fibo(n);

    return 0;
}
