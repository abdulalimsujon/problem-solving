#include <bits/stdc++.h>
using namespace std;

int val[1005], weight[1005];
int dp[1005][1005];

cout << "i am changing file" << "";

// class Solution {
// public:
//     int dp[105];

//     int rec(int n,vector<int>& nums){
//         if(n < 0) return 0;
//         if(dp[n] != -1) return dp[n];

//         int opt1 = nums[n]+rec(n-2,nums);
//         int opt2 = rec(n-1,nums);
          
//           dp[n] = max(opt1,opt2);

//         return dp[n];
//     }
     
//     int rob(vector<int>& nums) {
//         memset(dp,-1,sizeof(dp));
//         return rec(nums.size()-1,nums);
//     }
// }

int knapsack(int i, int max_weight) {
    // Base case
    if (i < 0 || max_weight <= 0) {
        return 0;
    }

    // Memoization check
    if (dp[i][max_weight] != -1) {
        return dp[i][max_weight];
    }

    // Choice
    if (weight[i] <= max_weight) {
        int opt1 = knapsack(i - 1, max_weight - weight[i]) + val[i];
        int opt2 = knapsack(i - 1, max_weight);

        return dp[i][max_weight] = max(opt1, opt2);
    } else {
        return dp[i][max_weight] = knapsack(i - 1, max_weight);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, max_weight;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    cin >> max_weight;

    // Initialize DP
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= max_weight; j++) {
            dp[i][j] = -1;
        }
    }

    cout << "the ans " << knapsack(n - 1, max_weight);

    return 0;
}
