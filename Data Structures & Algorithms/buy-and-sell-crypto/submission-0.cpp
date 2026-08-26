class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, curr = prices[0], n = prices.size();
        for(int i = 1; i < n; i++) {
            ans = max(ans, prices[i] - curr);
            curr = min(curr, prices[i]);
        }

        return ans;
    }
};
