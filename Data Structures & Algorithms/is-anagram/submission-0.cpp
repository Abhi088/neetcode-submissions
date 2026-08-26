class Solution {
public:
    bool isAnagram(string s, string t) {
        int l = s.length();
        if(l != t.length()) return false;
        vector<int> freq(26, 0);
        for(int i = 0; i < l; i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0) return false;
        }

        return true;
    }
};
