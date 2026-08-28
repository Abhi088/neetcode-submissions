class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.length() - 1;
        while(s[l] == ' ') l--;
        int ans = l;
        while(l >= 0 && s[l] != ' ') l--;
        return ans - l;
    }
};