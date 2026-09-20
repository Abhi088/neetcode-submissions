class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> copy(heights.begin(), heights.end());
        
        sort(heights.begin(), heights.end());
        int n = heights.size();

        int count = 0;
        for(int i = 0; i < n; i++) {
            if(heights[i] != copy[i]) count++;
        }

        return count;
    }
};