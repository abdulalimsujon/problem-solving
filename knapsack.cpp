#include <bits/stdc++.h>
using namespace std;

int val[1005], weight[1005];
int dp[1005][1005];

///snapsack

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


//subset sum
// int  subset_sum(int  i,int sum) {
  
//     if (i < 0  ) {
        
//       if (sum == 0) return 1;
//       else
//         return 0;
//     }
//      if(dp[i][sum] != -1){
//       return dp[i][sum];
//     } 
//     if(a[i] <= sum ){
//      int  opt1 = subset_sum(i - 1, sum - a[i]);
//      int  opt2 = subset_sum(i - 1, sum);
    
//      return dp[i][sum] = opt1 + opt2;
    
//     }
//     else
//     {
//       return dp[i][sum] = subset_sum(i - 1, sum);
//     }
// }


///equal sum 

// #include <bits/stdc++.h>
// using namespace std;

// int n, sum;
// int a[1005];

// bool equal_sum(int i, int sum) {

   
//     if (sum == 0) return true;
//     if (i < 0) return false;

//     if (a[i] <= sum) {
//         bool opt1 = equal_sum(i - 1, sum - a[i]);
//         bool opt2 = equal_sum(i - 1, sum);
//         return opt1 || opt2;  
//     } else {
//         return equal_sum(i - 1, sum);
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n >> sum;

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     cout << equal_sum(n - 1, sum);

//     return 0;
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
