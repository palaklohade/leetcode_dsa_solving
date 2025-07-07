class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    //  sort(coins.rbegin(), coins.rend());  
    //     int sum = 0;
    //     int count = 0;
    //     int i = 0;

    //     while (i < coins.size() && sum != amount) {
    //         if (sum + coins[i] <= amount) {
    //             sum += coins[i];
    //             count++;
    //         } else {
    //             i++;
    //         }
    //     }

    //     return sum == amount ? count : -1;
    //this will work for canonical numbers only 
    // time 0(n log n)
    vector<int> dp(amount + 1 , amount + 1);
    dp[0] = 0;
    for(int i = 1 ; i <= amount ; i++){
        for(int coin : coins){
            if( i- coin >= 0){
                dp[i] = min(dp[i], 1 + dp[i - coin]);
            }
        }
    }
    
return dp[amount] > amount ? -1 : dp[amount];
    }
};