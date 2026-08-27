class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> index;
        int l = s.length();
        int start = 0;
        int ans = 0;
        for(int i = 0; i < l; i++) {
            if(index.contains(s[i]) && index[s[i]] >= start) {
                start = index[s[i]] + 1;
            }

            index[s[i]] = i;

            ans = max(ans, i - start + 1);
        }

        return ans;
    }
};
