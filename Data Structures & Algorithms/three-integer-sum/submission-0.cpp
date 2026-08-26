class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++) {
            unordered_set<int> seen;
            int target = 0 - nums[i];
            for(int j = i + 1; j < n; j++) {
                if(seen.contains(target - nums[j])) {
                    ans.insert({nums[i], nums[j], target - nums[j]});
                }
                seen.insert(nums[j]);
            }
        }

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
