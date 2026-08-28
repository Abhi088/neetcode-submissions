class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int ans = 0;
        while(true) {
            for(int i = 0; i < n; i++) {
                if(ans >= strs[i].length() || strs[i][ans] != strs[0][ans]) {
                    if(ans == 0) return "";
                    return strs[0].substr(0, ans);
                }
            }
            ans++;
        }

        return "";
    }
};